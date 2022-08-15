all: $(patsubst %.c, %.out, $(wildcard *.c))

htoi.out: htoi.o
	$(CC) -o htoi.out htoi.o

btn.out: btn.o
	$(CC) -o btn.out btn.o

rmblank.out: rmblank.o
	$(CC) -o rmblank.out rmblank.o

squeeze.out: squeeze.o
	$(CC) -o squeeze.out squeeze.o

btn_repr.out: btn_repr.o
	$(CC) -o btn_repr.out btn_repr.o

htoi.o: htoi.c def.h
	$(CC) -c htoi.c

squeeze.o: squeeze.c def.h
	$(CC) -c squeeze.c

btn.o: btn.c def.h
	$(CC) -c btn.c

rmblank.o: rmblank.c def.h
	$(CC) -c rmblank.c

btn_repr.o: btn_repr.c def.h
	$(CC) -c btn_repr.c

build: $(wildcard *.c)
	$(CC) -c $?

format:
	clang-format -i *.c

clean:
	rm *.o
	rm *.out
