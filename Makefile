all: compile link

compile:
	g++ -Isrc/include -c main.cpp game.cpp player.cpp

link:
	g++ main.o game.o player.o -o main -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network
