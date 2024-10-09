############################################
# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = -g -Wno-unused-variable

# Define the targets
TARGETS = basic_concepts

# Define the source files for each target
SRCS_basic_concepts = basic_concepts.cpp

# Define the object files for each target
OBJS_basic_concepts = $(SRCS_basic_concepts:.cpp=.o)

# Rule to build all targets
all: $(TARGETS)

# add dependency rules for basic_concepts.o
basic_concepts.o: basic_concepts.cpp basic_concepts.h
# Rule to build if_else
basic_concepts: $(OBJS_basic_concepts)
	$(CXX) $(CXXFLAGS) -o basic_concepts $(OBJS_basic_concepts)

# Rule to build object files for if_else
$(OBJS_basic_concepts): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean the build directory
clean:
	rm -f $(OBJS_basic_concepts) $(TARGETS)

