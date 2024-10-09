# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = 
#-Wall -g

# Define the targets 
TARGET = exceptions

# Define the source files for each target
SRCS = exceptions.cpp

# Define the object files for each target
OBJS = $(SRCS:.cpp=.o)

# Rule to build all targets
all: $(TARGET)

# add dependency rules for compiler
exceptions.o: exceptions.cpp

# rules to build executables
exceptions: exceptions.o
	$(CXX) $(CXXFLAGS) -o exceptions exceptions.o

# rule to build object files from sources
$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# rule to clean the build directory
clean:
	rm -f $(OBJS) $(TARGET)
