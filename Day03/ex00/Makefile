CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILES = main.cpp ClapTrap.cpp

INCLUDE = ClapTrap.hpp

OBJ_FILES = $(SRC_FILES:.cpp=.o)

EXECUTABLE = ClapTrap

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ_FILES)
	$(CXX) $(OBJ_FILES) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_FILES)

fclean: clean
	@$(RM) $(EXECUTABLE)

re: fclean all