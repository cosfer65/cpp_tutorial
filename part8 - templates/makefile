# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = 
#-Wall -g

# Define the targets
TARGET = function_templates class_templates specialization metaprogramming

# Define the source files for each target
SRCS = function_templates.cpp class_templates.cpp specialization.cpp metaprogramming.cpp

# Define the object files for each target
OBJS = $(SRCS:.cpp=.o)

# Rule to build all targets
all: $(TARGET)

# add dependency rules for compiler
inheritance.o: function_templates.cpp
class_templates.o: class_templates.cpp
specialization.o: specialization.cpp
metaprogramming.o: metaprogramming.cpp

# rules to build executables
function_templates: function_templates.o
	$(CXX) $(CXXFLAGS) -o function_templates function_templates.o

class_templates: class_templates.o
	$(CXX) $(CXXFLAGS) -o class_templates class_templates.o

specialization: specialization.o
	$(CXX) $(CXXFLAGS) -o specialization specialization.o

metaprogramming: metaprogramming.o
	$(CXX) $(CXXFLAGS) -o metaprogramming metaprogramming.o

# rule to build object files from sources
$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# rule to clean the build directory
clean:
	rm -f $(OBJS) $(TARGET)

