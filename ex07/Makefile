NAME	=	replace
HDIR	=	.
SDIR	=	.
SRCS	=	$(addprefix $(SDIR)/, main.cpp)
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
TSTIN	=	test.txt
TSTOUT	=	$(TSTIN).replace
TSTSRCH	=	hunter2
TSTRPLC	=	*******

all:		$(NAME)

$(NAME):	$(SRCS)
	$(CC) $(CFLAGS) -I$(HDIR) $^ -o $@

re: fclean all

clean:
	rm -f $(TSTOUT)

fclean: clean
	rm -f $(NAME)

test: all
	./$(NAME) "$(TSTIN)" "$(TSTSRCH)" "$(TSTRPLC)"
	cat "$(TSTIN)" | sed "s|$(TSTSRCH)|$(TSTRPLC)|g" | diff - $(TSTOUT)