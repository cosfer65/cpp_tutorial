// part11.cpp
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <fstream>

void basic_io_s()
{
    std::string s;
    std::cout << "please type your name:";
    std::cin >> s;
    std::cout << "Hello " << s << "\n";
}

void strinstream_s()
{
    // initialize the stream with a string
    std::stringstream s("this is a string with several words");
    std::string w;
    std::vector<std::string> v;

    // while we are reading words
    while (s >> w)
    {
        // and put them in a vector
        v.push_back(w);
    }
    // this will be an output stream
    std::stringstream t;
    // output the words followed by a hyphen
    std::for_each(v.begin(), v.end(), [&t, &w](std::string& s) {std::cout << s << " "; t << s << "-"; });
    // display the result
    std::cout << "\n" << t.str();
}

void filewrite_s()
{
    std::ofstream o;
    o.open("some file.txt", std::ios::out);

    o << "some text";
    o.close();

    o.open("some file.txt", std::ios::app);
    for (int i=0;i<10;i++)
        o << "some more text\n";
    o.close();
}

void fileread_s()
{
    std::ifstream is;
    is.open("some file.txt", std::ios::in);

    int count = 0;
    std::string s;
    // using stream operator reads word by word
    // while (is >> s)
    //  this reads line by line
    while (getline(is, s))
    {
        std::cout << s << "\n";
        // depending on the loop we count lines or words
        ++count;
    }
    is.close();
    std::cout << "count:" << count << "\n";
}

void write_binary_s()
{
    std::ofstream o;
    // open the file for binary output
    o.open("some file.dat", std::ios::out | std::ios::binary);
    // write an integer
    int i = 1;
    o.write((char*)&i, sizeof(int));
    //write a character
    char c = '3';
    o.write((char*)&c, sizeof(char));
    // save a text string
    std::string s("some text");
    // first save its length
    i = (int)s.length();
    o.write((char*)&i, sizeof(int));
    // and then the contents
    o.write((char*)s.c_str(), i);
    o.close();
}

void read_binary_s()
{
    std::ifstream ifs;
    ifs.open("some file.dat", std::ios::in | std::ios::binary);
    // read the integer
    int i;
    ifs.read((char*)&i, sizeof(int));
    // read the character
    char c;
    ifs.read((char*)&c, sizeof(char));
    // read the string
    int l;   // first read the length
    ifs.read((char*)&l, sizeof(int));
    // allocate memory (+1 for NULL terminator)
    char* txt = new char[l + 1];
    // read the text
    ifs.read(txt, l * sizeof(char));
    txt[l] = '\0';  // append NULL terminator
    std::string s(txt);   // and create a string
    delete[]txt;    // release text memory
    ifs.close();
    // and view the results
    std::cout << "i=" << i << "\n";
    std::cout << "c=" << c << "\n";
    std::cout << "s=" << s << "\n";
}


int main()
{
    //basic_io_s();
    //strinstream_s();
    //filewrite_s();
    //fileread_s();
    write_binary_s();
    read_binary_s();
}
