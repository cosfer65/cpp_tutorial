# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = 
#-Wall -g

# Define the targets 
TARGET = preproc

# Define the source files for each target
SRCS = preproc.cpp

# Define the object files for each target
OBJS = $(SRCS:.cpp=.o)

# Rule to build all targets
all: $(TARGET)

# add dependency rules for compiler
preproc.o: preproc.cpp

# rules to build executables
preproc: preproc.o
	$(CXX) $(CXXFLAGS) -o preproc preproc.o

# rule to build object files from sources
$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# rule to clean the build directory
clean:
	rm -f $(OBJS) $(TARGET)
