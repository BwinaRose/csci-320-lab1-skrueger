lab1: lab1.c main.c
	gcc -o lab1 lab1.c main.c -I.

clean:
	-rm -f *.o
	@echo "Cleaned up!"
