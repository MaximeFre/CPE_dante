##
## EPITECH PROJECT, 2020
## CPE_dante_2019
## File description:
## Makefile
##

all:
	(cd solver_dir ; make)
	(cd generator_dir ; make)

clean:
	(cd solver_dir ; make clean)
	(cd generator_dir ; make clean)
	rm -f vgcore*

fclean:		clean
	(cd solver_dir ; make fclean)
	(cd generator_dir ; make fclean)
	rm -f generator
	rm -f solver

re:
	(cd solver_dir ; make re)
	(cd generator_dir ; make re)

solver:
	(cd solver_dir ; make re)

generator:
	(cd generator_dir ; make re)