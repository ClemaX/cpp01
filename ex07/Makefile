NAME	=	replace
HDIR	=	.
SDIR	=	.
SRCS	=	$(addprefix $(SDIR)/, main.cpp)
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(SRCS)
	$(CC) $(CFLAGS) -I$(HDIR) $^ -o $@

re: fclean all

clean:
	@echo "Nothing to clean"

fclean:
	rm -f $(NAME)