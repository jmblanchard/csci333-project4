CPP = g++
CPPFLAGS = -Wall -Wextra -Werror

all: Entry.o HashTable.o httest

Entry.o: Entry.cpp Entry.h
	$(CPP) $(CPPFLAGS) -c Entry.cpp

HashTable.o: HashTable.cpp
	$(CPP) $(CPPFLAGS) -c HashTable.cpp

httest: httest.cpp Entry.o HashTable.o
	$(CPP) $(CPPFLAGS) -o httest httest.cpp Entry.o HashTable.o

clean:
	rm -f *.o
	rm -f httest
