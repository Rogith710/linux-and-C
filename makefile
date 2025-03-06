$(CC) = gcc

final: main.o add.o sub.o
	$(CC) main.o add.o sub.o -o final

main.o: main.c header.h
	$(CC) -c main.c

add.o: add.c header.h
	$(CC) -c add.c

sub.o: sub.c header.h
	$(CC) -c sub.c

clean:
	rm *.o final


