CC=g++
CFLAGS=-pedantic -Wall -std=c++14
SOURCES=student.cpp

all:
	$(CC) $(CFLAGS) $(SOURCES)
