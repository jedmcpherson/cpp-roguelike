build : main.cpp grid.cpp grid.h
	g++ -o roguelike main.cpp grid.cpp -lncurses
