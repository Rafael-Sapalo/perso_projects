##
## EPITECH PROJECT, 2023
## my_paint
## File description:
## Makefile
##

LIB			=	-L ./lib/my/ -I ./include/ -lmy

NAME_LIB	=	libmy.a
LIBS_FILES	=	lib/my/
CHECKCMD	=	src/check_cmd/
BUILTIN		=	src/built-in/
INITPATH	=	src/init/
GETENVPATH	=	src/get_env/
EXECPATH	=	src/exec/
PIDPATH		=	src/pid/
PIPEPATH	=	src/pipes/

WARN = -Wextra -Wall -Werror

debug	=	-pedantic -g3

SRC 	=	$(LIBS_FILES)my_putchar.c	\
			$(LIBS_FILES)my_putstr.c	\
			$(LIBS_FILES)my_strcat.c	\
			$(LIBS_FILES)my_strlen.c	\
			$(LIBS_FILES)my_strcmp.c	\
			$(LIBS_FILES)my_strcpy.c	\
			$(LIBS_FILES)my_strdup.c	\
			$(LIBS_FILES)strtok_array.c	\
			$(LIBS_FILES)my_strncmp.c	\
			$(LIBS_FILES)str_to_array.c	\
			$(LIBS_FILES)array_cpy.c	\
			$(LIBS_FILES)array_cmp.c	\
			$(LIBS_FILES)my_getnbr.c	\
			$(LIBS_FILES)my_charcmp.c	\
			$(LIBS_FILES)rm_first_space.c	\
			$(LIBS_FILES)get_type.c	\
			$(LIBS_FILES)my_strchr.c	\
			$(INITPATH)init_strc.c	\
			$(CHECKCMD)cmd_path.c	\
			$(GETENVPATH)get_env_path.c	\
			$(CHECKCMD)check_cmd.c	\
			$(BUILTIN)change_dir.c	\
			$(BUILTIN)print_env.c	\
			$(BUILTIN)setenv.c	\
			$(BUILTIN)check_builtins.c	\
			$(BUILTIN)unsetenv.c	\
			$(BUILTIN)exit.c	\
			$(EXECPATH)exec_cmd.c	\
			$(EXECPATH)executables.c	\
			$(EXECPATH)get_args.c	\
			$(PIDPATH)get_pid.c	\
			$(PIDPATH)signal_handler.c	\
			$(PIPEPATH)check_pipes.c	\


OBJ	=	$(SRC:.c=.o)

NAME 	= 	mysh

all: 		$(NAME)

$(NAME):	$(OBJ)
		ar -rc $(NAME_LIB) $(OBJ)
		mv $(NAME_LIB) lib/my/
		gcc -o $(NAME) main.c $(LIB) $(WARN)
clean:
	rm -f $(OBJ)
	rm -f lib/my/$(NAME_LIB)

fclean: clean
	-rm -f $(NAME)

DEBUG:	$(OBJ)
	ar -rc $(NAME_LIB) $(OBJ)
	mv $(NAME_LIB) lib/my/
	gcc -o $(NAME) main.c $(LIB) $(WARN) $(debug)
re: fclean all

.PHONY:	all clean fclean re
