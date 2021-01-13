NAME		=	replace

SDIR		=	.

SRCS		=	$(addprefix $(SDIR)/, main.cpp)

CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -pedantic -std=c++98

TSTIN		=	test.txt
TSTOUT		=	$(TSTIN).replace
TSTSRCH		=	hunter2
TSTRPLC		=	*******

all:		$(NAME)

$(NAME):	$(SRCS)
	$(CXX) $(CPPFLAGS) $^ -o $@

re: fclean all

clean:
	rm -f $(TSTOUT)

fclean: clean
	rm -f $(NAME)

test: all
	./$(NAME) "$(TSTIN)" "$(TSTSRCH)" "$(TSTRPLC)"
	cat "$(TSTIN)" | sed "s|$(TSTSRCH)|$(TSTRPLC)|g" | diff - $(TSTOUT)
