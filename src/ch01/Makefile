CFLAGS=-g -Og
CC=g++

OBJECT = bubblesort1A

all : $(OBJECT)

.cpp.s :
	$(CC) $(CFLAGS) -S $*.cpp
.cpp.o :
	$(CC) $(CFLAGS) -c $*.cpp

clean :
	rm -rf $(OBJECT) *.S *.s *.o

