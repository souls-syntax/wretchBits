CC = cc
CFLAGS = -Wall -g $(shell pkg-config --cflags libnotify)
LDLIBS = $(shell pkg-config --libs libnotify)
all: promo


promo: main.o
	$(CC) $(CFLAGS) $(LDLIBS) -o promo main.o
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

test: test.o
	$(CC) $(CFLAGS) $(LDLIBS) -o test test.o

test.o: test.c
	$(CC) $(CFLAGS) -c test.c

clean:
	rm -f promo test *.o
