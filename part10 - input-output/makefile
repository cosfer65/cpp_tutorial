# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = 
#-Wall -g

# Define the targets 
TARGET = io

# Define the source files for each target
SRCS = io.cpp

# Define the object files for each target
OBJS = $(SRCS:.cpp=.o)

# Rule to build all targets
all: $(TARGET)

# add dependency rules for compiler
io.o: io.cpp

# rules to build executables
io: io.o
	$(CXX) $(CXXFLAGS) -o io io.o

# rule to build object files from sources
$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# rule to clean the build directory
clean:
	rm -f $(OBJS) $(TARGET)

