# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = 
#-Wall -g

# Define the targets
TARGET = inheritance multiple friends

# Define the source files for each target
SRCS = inheritance.cpp multiple.cpp friends.cpp

# Define the object files for each target
OBJS = $(SRCS:.cpp=.o)

# Rule to build all targets
all: $(TARGET)

# add dependency rules for compiler
inheritance.o: inheritance.cpp inheritance.h
multiple.o: multiple.cpp
friends.o: friends.cpp

# rules to build executables
inheritance: inheritance.o
	$(CXX) $(CXXFLAGS) -o inheritance inheritance.o

multiple: multiple.o
	$(CXX) $(CXXFLAGS) -o multiple multiple.o	

friends: friends.o
	$(CXX) $(CXXFLAGS) -o friends friends.o

# rule to build object files from sources
$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# rule to clean the build directory
clean:
	rm -f $(OBJS) $(TARGET)

