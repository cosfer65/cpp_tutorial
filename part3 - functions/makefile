############################################
# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = -Wall -g

# Define the targets
TARGET = functions func_ptr

# Define the source files for each target
SRCS = functions.cpp add_functions.cpp graphics.cpp func_ptr.cpp

# Define the object files for each target
OBJS = $(SRCS:.cpp=.o)

# Rule to build all targets
all: $(TARGET)

# add dependency rules for functions.o
functions.o: functions.cpp functions.h add_functions.h graphics.h

# add dependency rules for add_functions.o
add_functions.o: add_functions.cpp add_functions.h

# add dependency rules for graphics.o
graphics.o: graphics.cpp graphics.h

func_ptr.o: func_ptr.cpp

# Rule to build if_else
functions: functions.o add_functions.o graphics.o
	$(CXX) $(CXXFLAGS) -o functions functions.o add_functions.o graphics.o

func_ptr: func_ptr.o
	$(CXX) $(CXXFLAGS) -o func_ptr func_ptr.o

# Rule to build object files for if_else
$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean the build directory
clean:
	rm -f $(OBJS) $(TARGETS)

