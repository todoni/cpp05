CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -MD -g
NAME = ex_02
SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS = $(SRCS:.cpp=.o)

#%.o : %.cc
#	$(CXX) $(CXXFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean :
	rm -f $(OBJS)
	rm -f $(OBJS:.o=.d)

fclean :
	rm -f $(OBJS)
	rm -f $(OBJS:.o=.d)
	rm -f $(NAME)
re :
	rm -f $(OBJS)
	rm -f $(OBJS:.o=.d)
	rm -f $(NAME)
	make $(NAME)

.PHONY : all clean fclean re

-include $(OBJS:.o=.d)
