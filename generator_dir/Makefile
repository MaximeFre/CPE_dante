##
## EPITECH PROJECT, 2020
## tmp
## File description:
## Makefile
##

CFLAGS	=	-g -Iinclude -I../lib/include -Wall
LDFLAGS	+=	-lm

EXEC	=	generator

SRC	=	main.c									\
		../lib/src/my_strlen.c					\
		../lib/src/my_strcmp.c					\
		../lib/src/my_getnbr.c					\
		src/prepare_maze.c						\
		src/error_handling.c					\
		src/move_func.c							\
		src/generator.c							\
		src/print_maze.c

OBJ	=	$(SRC:.c=.o)

all:	$(EXEC)

$(EXEC):	$(OBJ)
	gcc -o $(EXEC) $(OBJ) $(LDFLAGS)
	mv $(EXEC) ../

clean:
	rm -f $(OBJ)
	rm -f vgcore*

fclean:		clean
	rm -f $(EXEC)

re:		fclean all