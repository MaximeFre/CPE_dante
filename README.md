# CPE_dante
this is a labyrinth generator and solver.

first compile the two programme with 'make' at the root of the repository

then to generate a map go to generator and try : ./generator 100 100 perfect > ../test.txt
It will generate a 100x100 perfect Labyrinth at the root of the repository .(perfect = only one path) remove "perfect" to generate an imperfect maze

Then go to solver and try : ./solver ../test.txt it will solve the labyrinth you just generate ! (./solver ../test.txt > result.txt to store the result in a file) The 'o' in the result is the path, the beginning is at the top left of the map and the end is at the bottom right
