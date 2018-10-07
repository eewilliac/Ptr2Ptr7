build:
	mkdir ./build
	gcc -Wall ./src/prog1.c -o ./build/Prog1
clean:
	rm -rf ./build