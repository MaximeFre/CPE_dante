##
## EPITECH PROJECT, 2020
## tmp
## File description:
## Makefile
##

CFLAGS	=	-Igenerator/include -I../lib/include -Wall
LDFLAGS	=	-lm

EXEC	=	generator

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

all:	$(EXEC)

$(EXEC):	$(OBJ)
	gcc -o $(EXEC) $(OBJ) $(LDFLAGS)
	cp $(EXEC) ../

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(EXEC)

re:		fclean all