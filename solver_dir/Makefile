##
## EPITECH PROJECT, 2020
## tmp
## File description:
## Makefile
##

CFLAGS	=	-Iinclude -I../lib/include -Wall
LDFLAGS	=	-lm

EXEC	=	solver

SRC	=	main.c

OBJ		=	$(SRC:.c=.o)

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