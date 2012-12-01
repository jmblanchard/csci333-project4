CPP = g++
CPPFLAGS = -Wall -Wextra -Werror

all: Entry.o

Entry.o: Entry.cpp Entry.h
	$(CPP) $(CPPFLAGS) -c Entry.cpp

clean:
	rm -f *.o
