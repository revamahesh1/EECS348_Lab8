CC = gcc
CFLAGS = -g -Wall

himake: Mahesh1.c
	$(CC) $(CFLAGS) -o himake Mahesh1.c

hellomake:  Mahesh2.c
	$(CC) $(CFLAGS) -o hellomake Mahesh2.c

func.o: Mahesh1.c Mahesh2.c
	$(CC) $(CFLAGS) -c Mahesh1.c Mahesh2.c

clean:
	rem -f *.o himake hellomake
