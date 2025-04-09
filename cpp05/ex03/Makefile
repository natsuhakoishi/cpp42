# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/23 16:31:45 by yyean-wa          #+#    #+#              #
#    Updated: 2025/04/09 17:19:33 by yyean-wa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98 -fsanitize=address -g3 -pedantic

OBJDIR = obj

SRCS = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@$(CPP) $(CPPFLAGS) -c -o $@ $<

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)
	@rm -rf *_shrubbery

fclean: clean
	@rm -f $(NAME)

re: fclean all


