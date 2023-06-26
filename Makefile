CXX ?= g++
CXXFLAGS = -g -Wall

# path #
SRC_PATH = src
INCLUDE_PATH = include
BUILD_PATH = obj
BIN_PATH = bin

# sources #
SRC := $(wildcard $(SRC_PATH)/*.cpp)
OBJ := $(subst $(SRC_PATH), $(BUILD_PATH), $(SRC:.cpp=.o))
INC := -I $(INCLUDE_PATH)


all : $(BIN_PATH)/backpack


$(BIN_PATH)/backpack: $(OBJ)
	$(CXX) $(CXXFLAGS) $(INC) -o $@ $^ 
	
$(BUILD_PATH)/%.o : $(SRC_PATH)/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<


.PHONY: clean 
clean: 
	del /s *.o
	del /s *.exe