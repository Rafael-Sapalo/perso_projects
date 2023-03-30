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
		lib/my/flags/oct_ave.c	\
		lib/my/flags/u_flag.c	\
		lib/my/flags/binflag.c	\
		lib/my/flags/hexa_low_flag.c	\
		lib/my/flags/hexa_up_flag.c	\
		lib/my/modifiers/modifiers_cases.c	\
		lib/my/modifiers/hashtag.c	\
		lib/my/flags/put_oct.c	\
		lib/my/flags/format/plus.c	\
		lib/my/Myprintf/my_printf.c	\
		lib/my/open_file.c	\
		src/count_map.c	\
		src/convert_to_array.c	\
		src/convert_to_int.c	\
		src/bsq_alg.c	\
		src/find_square_loc.c	\
		src/count_new_line.c

OBJ	=	$(SRC:.c=.o)

MAN	=	bsq

CFLAGS	=	-W -Wall -Wextra -g3

LIB	=	-L ./lib/ -I ./include/ -lmy

NAME_LIB  = libmy.a

all:	$(NAME_LIB)

copy:
	cp $(NAME_LIB) lib/

clean:
	rm -f lib/my/*.o
	rm -f lib/my/modifiers/*.o
	rm -f lib/my/flags/*.o
	rm -f lib/my/*~
	rm -f lib/my/*#
	rm -f lib/my/flags/format/*.o
	rm -f lib/my/Myprintf/*.o
	rm -f lib/my/$(NAME_LIB)
	rm -f lib/$(NAME_LIB)
	rm -f $(NAME_LIB)
	rm -f src/*.o
	rm -f $(MAN)
fclean:
	make clean

gcc:
	gcc -o $(MAN) main.c $(LIB)


re:
	make fclean
	make

$(NAME_LIB):    $(OBJ)
	ar -rc $(NAME_LIB) $(OBJ)
	make copy
	gcc -o $(MAN) main.c $(LIB) $(CFLAGS)
