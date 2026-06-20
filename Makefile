NAME = fish

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:src/%.cpp=obj/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo "✨ $(NAME) is ready to run! ✨"

obj/%.o: src/%.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "🧽 Objects removed 🧽"

fclean: clean
	@rm -f $(NAME)
	@echo "🧽 All clean! 🧽"

$(OBJ) : $(wildcard includes/*.hpp)

re: fclean all