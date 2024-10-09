# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = 
#-Wall -g

# Define the targets
TARGET = pointers references

# Define the source files for each target
SRCS = pointers.cpp references.cpp

# Define the object files for each target
OBJS = $(SRCS:.cpp=.o)

# Rule to build all targets
all: $(TARGET)

# add dependency rules for compiler
pointers.o: pointers.cpp
references.o: references.cpp

# rules to build executables
pointers: pointers.o
	$(CXX) $(CXXFLAGS) -o pointers pointers.o

references: references.o
	$(CXX) $(CXXFLAGS) -o references references.o

# rule to build object files from sources
$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# rule to clean the build directory
clean:
	rm -f $(OBJS) $(TARGET)

