build:
	mkdir ./build
	gcc -Wall ./src/prog1.c -out ./build/Prog1
clean:
	rm -f ./build