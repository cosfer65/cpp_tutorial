#include <iostream>

enum months { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
enum days { mon = 1, tue = 2, wed = 3, thu = 4, fri = 5, sat = 6, sun = 7 };

int month_days(months mon) {
    int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    return days[mon];
}

const char* month_name(months mon) {
    const char* names[] = { "jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
    return names[mon];
}

int main() {
    months month = sep;
    month = jan;
    std::cout << month_name(month) << " has " << month_days(month) << " days\n";
}
