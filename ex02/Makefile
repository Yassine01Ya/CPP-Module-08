SOURCE =  main.cpp

OBJECT = $(SOURCE:.cpp=.o)


CXX = c++

NAME = MutantStack

CFLAGS =-Wall -Werror -Wextra -std=c++98

%.o : %.cpp
	$(CXX) $(CFLAGS) $< -c -o $@

all : $(NAME)

$(NAME): $(OBJECT)
	$(CXX) $(CFLAGS) $(OBJECT) -o $(NAME)

clean :
	rm -f  $(OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all
