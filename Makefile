src=main.c

build:
	gcc -o main $(src)

run:
	./main

.PHONLY : clean

clean:
	- rm -f main
