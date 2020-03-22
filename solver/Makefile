##
## EPITECH PROJECT, 2020
## tmp
## File description:
## Makefile
##

CFLAGS	=	-Iinclude -I../lib/include -Wall
LDFLAGS	=	-lm

EXEC	=	solver

SRC	=	main.c				\
		src/open_file.c		\
		src/solve.c			\
		src/check.c			\
		src/end.c			\
		src/move.c

OBJ		=	$(SRC:.c=.o)

all:	$(EXEC)

$(EXEC):	$(OBJ)
	gcc -g -o $(EXEC) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore*

fclean:		clean
	rm -f $(EXEC)

re:		fclean all
