# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = 
#-Wall -g

# Define the targets
TARGET = enums structs classes functors lambda

# Define the source files for each target
SRCS = enums.cpp structs.cpp classes.cpp functors.cpp lambda.cpp

# Define the object files for each target
OBJS = $(SRCS:.cpp=.o)

# Rule to build all targets
all: $(TARGET)

# add dependency rules for compiler
enums.o: enums.cpp
structs.o: structs.cpp
classes.o: classes.cpp classes.h
functors.o: functors.cpp
lambda.o: lambda.cpp

# rules to build executables
enums: enums.o
	$(CXX) $(CXXFLAGS) -o enums enums.o

structs: structs.o
	$(CXX) $(CXXFLAGS) -o structs structs.o
	
classes: classes.o
	$(CXX) $(CXXFLAGS) -o classes classes.o

functors: functors.o
	$(CXX) $(CXXFLAGS) -o functors functors.o

lambda: lambda.o
	$(CXX) $(CXXFLAGS) -o lambda lambda.o

# rule to build object files from sources
$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# rule to clean the build directory
clean:
	rm -f $(OBJS) $(TARGET)

