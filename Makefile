##
## EPITECH PROJECT, 2020
## CPE_dante_2019
## File description:
## Makefile
##

all:
	(cd solver ; make)
	(cd generator ; make)

clean:
	(cd solver ; make clean)
	(cd generator ; make clean)
	rm -f vgcore*

fclean:		clean
	(cd solver ; make fclean)
	(cd generator ; make fclean)

re:
	(cd solver ; make re)
	(cd generator ; make re)

solver:
	(cd solver ; make re)

generator:
	(cd generator ; make re)