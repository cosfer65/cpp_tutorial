# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = 
#-Wall -g

# Define the targets
TARGET =  arrays vectors strings

# Define the source files for each target
SRCS = arrays.cpp vectors.cpp strings.cpp

# Define the object files for each target
OBJS = $(SRCS:.cpp=.o)

# Rule to build all targets
all: $(TARGET)

# add dependency rules for compiler
arrays.o: arrays.cpp
vectors.o: vectors.cpp
strings.o: strings.cpp

# rules to build executables
arrays: arrays.o
	$(CXX) $(CXXFLAGS) -o arrays arrays.o

vectors: vectors.o
	$(CXX) $(CXXFLAGS) -o vectors vectors.o	

strings: strings.o
	$(CXX) $(CXXFLAGS) -o strings strings.o	
	
# rule to build object files from sources
$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# rule to clean the build directory
clean:
	rm -f $(OBJS) $(TARGET)

