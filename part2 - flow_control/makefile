############################################
# Define the compiler
CXX = g++

# Define the flags
CXXFLAGS = 

# Define the targets
TARGET = if_else switch loops break_continue

# Define the source files for each target
SRCS = if_else.cpp switch.cpp loops.cpp break_continue.cpp

# Define the object files for each target
OBJS = $(SRCS:.cpp=.o)

# Rule to build all targets
all: $(TARGET)

# add dependency rules for compiler
if_else.o: if_else.cpp
switch.o: switch.cpp
loops.o: loops.cpp
break_continue.o: break_continue.cpp

# rules to build executables
if_else: if_else.o
	$(CXX) $(CXXFLAGS) -o if_else if_else.o

switch: switch.o
	$(CXX) $(CXXFLAGS) -o switch switch.o

loops: loops.o
	$(CXX) $(CXXFLAGS) -o loops loops.o

break_continue: break_continue.o
	$(CXX) $(CXXFLAGS) -o break_continue break_continue.o

# rule to build object files from sources
$(OBJS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# rule to clean the build directory
clean:
	rm -f $(OBJS) $(TARGET)

