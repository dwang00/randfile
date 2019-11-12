all: main.o genNum.o
	gcc -o rand main.o genNum.o

main.o: main.c genNum.o genNum.h
	gcc -c main.c genNum.o genNum.h

genNum.o: genNum.c
	gcc -c genNum.c

run:
	./rand

clean:
	del *.exe
	del *.o
	del *.gch
	del *.txt
