CC=g++
CFLAGS=-pedantic-errors -Wall -Weffc++ -Wsign-conversion -std=c++20 -Ihdr 

mchess: src/main.cpp
	$(CC) -o bin/$@ $^ $(CFLAGS)