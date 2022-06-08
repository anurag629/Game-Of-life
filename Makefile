CC = gcc
CFLAGS = -Wall -Werror -pedantic -ansi
OBJ =  main.o readFromFile.o drawLife.o nextPhase.o countNeighbour.o
EXEC = life

		

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

main.o: main.c header.h
		$(CC) -c main.c $(CFLAGS)

readFromFile.o: readFromFile.c header.h
		$(CC) -c readFromFile.c $(CFLAGS)

drawLife.o: drawLife.c header.h
		$(CC) -c drawLife.c $(CFLAGS)

nextPhase.o: nextPhase.c header.h
		$(CC) -c nextPhase.c $(CFLAGS)

countNeighbour.o: countNeighbour.c header.h
		$(CC) -c countNeighbour.c $(CFLAGS)
		
clean:
	rm -f $(EXEC) $(OBJ)
