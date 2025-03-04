# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yyean-wa < yyean-wa@student.42kl.edu.my    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/02 21:12:46 by yyean-wa          #+#    #+#              #
#    Updated: 2025/03/04 19:07:16 by yyean-wa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

OBJDIR = obj

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
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

fclean: clean
	@rm -f $(NAME)

re: fclean all

# valgrind --leak-check=full --show-leak-kinds=all ./brain
