##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## First Makefile
##

SRC	=	lib/my/my_strlen.c	\
		lib/my/my_putnbr.c	\
		lib/my/my_putstr.c	\
		lib/my/my_putchar.c	\
		flags/oct_ave.c	\
		flags/u_flag.c	\
		flags/binflag.c	\
		flags/hexa_low_flag.c	\
		flags/hexa_up_flag.c	\
		modifiers/modifiers_cases.c	\
		modifiers/hashtag.c	\
		flags/put_oct.c	\
		flags/format/plus.c	\
		my_printf.c

OBJ	=	$(SRC:.c=.o)

NAME_LIB  = libmy.a

all:	$(NAME_LIB)

copy:
	cp $(NAME_LIB) lib/my/

clean:
	rm -f lib/my/*.o
	rm -f modifiers/*.o
	rm -f flags/*.o
	rm -f lib/my/*~
	rm -f lib/my/*#
	rm -f flags/format/*.o
	rm -f lib/my/$(NAME_LIB)
	rm -f $(NAME_LIB)
	rm -f *.o
fclean:
	make clean

$(NAME_LIB):    $(OBJ)
	ar -rc $(NAME_LIB) $(OBJ)
	make copy
