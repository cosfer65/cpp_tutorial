# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = 
#-Wall -g

# Define the targets 
TARGET = intro sequential associative unordered adapters iterators algorithms

# Define the source files for each target
SRCS = intro.cpp sequential.cpp associative.cpp unordered.cpp adapters.cpp iterators.cpp algorithms.cpp

# Define the object files for each target
OBJS = $(SRCS:.cpp=.o)

# Rule to build all targets
all: $(TARGET)

# add dependency rules for compiler
intro.o: intro.cpp
sequential.o: sequential.cpp
associative.o: associative.cpp
unordered.o: unordered.cpp
adapters.o: adapters.cpp
iterators.o: iterators.cpp
algorithms.o: algorithms.cpp

# rules to build executables
intro: intro.o
	$(CXX) $(CXXFLAGS) -o intro intro.o

sequential: sequential.o
	$(CXX) $(CXXFLAGS) -o sequential sequential.o

associative: associative.o
	$(CXX) $(CXXFLAGS) -o associative associative.o

unordered: unordered.o
	$(CXX) $(CXXFLAGS) -o unordered unordered.o

adapters: adapters.o
	$(CXX) $(CXXFLAGS) -o adapters adapters.o

iterators: iterators.o 
	$(CXX) $(CXXFLAGS) -o iterators iterators.o

algorithms: algorithms.o
	$(CXX) $(CXXFLAGS) -o algorithms algorithms.o

# rule to build object files from sources
$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# rule to clean the build directory
clean:
	rm -f $(OBJS) $(TARGET)

