NAME     = bureaucrat
CXX      = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
       bureaucrat.cpp \
	   aform.cpp \
	   Shrubbery.cpp \
	   PresidentialPardonForm.cpp \
	   Robotomy.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp bureaucrat.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) garden_shrubbery

re: fclean all

.PHONY: all clean fclean re
