all: $(patsubst %.c, %.out, $(wildcard *.c))

histogram.out: histogram.o
	$(CC) -o histogram.out histogram.o

itob.out: itob.o
	$(CC) -o itob.out itob.o

goto.out: goto.o
	$(CC) -o goto.out goto.o

grep.out: grep.o
	$(CC) -o grep.out grep.o

trim.out: trim.o
	$(CC) -o trim.out trim.o

arrays.out: arrays.o
	$(CC) -o arrays.out arrays.o

words.out: words.o
	$(CC) -o words.out words.o

counts.out: counts.o
	$(CC) -o counts.out counts.o

temp.out: temp.o
	$(CC) -o temp.out temp.o

htoi.out: htoi.o
	$(CC) -o htoi.out htoi.o

itoa.out: itoa.o
	$(CC) -o itoa.out itoa.o

expand.out: expand.o
	$(CC) -o expand.out expand.o

shellsort.out: shellsort.o
	$(CC) -o shellsort.out shellsort.o

reverse.out: reverse.o
	$(CC) -o reverse.out reverse.o

atoi.out: atoi.o
	$(CC) -o atoi.out atoi.o

escape.out: escape.o
	$(CC) -o escape.out escape.o

binsearch.out: binsearch.o
	$(CC) -o binsearch.out binsearch.o

lower.out: lower.o
	$(CC) -o lower.out lower.o

bitcount.out: bitcount.o
	$(CC) -o bitcount.out bitcount.o

invert.out: invert.o
	$(CC) -o invert.out invert.o

setbits.out: setbits.o
	$(CC) -o setbits.out setbits.o

masking.out: masking.o
	$(CC) -o masking.out masking.o

any.out: any.o
	$(CC) -o any.out any.o

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

histogram.o: histogram.c def.h
	$(CC) -c histogram.c

arrays.o: arrays.c def.h
	$(CC) -c arrays.c

words.o: words.c def.h
	$(CC) -c words.c

counts.o: counts.c def.h
	$(CC) -c counts.c

temp.o: temp.c def.h
	$(CC) -c temp.c

squeeze.o: squeeze.c def.h
	$(CC) -c squeeze.c

btn.o: btn.c def.h
	$(CC) -c btn.c

rmblank.o: rmblank.c def.h
	$(CC) -c rmblank.c

btn_repr.o: btn_repr.c def.h
	$(CC) -c btn_repr.c

any.o: any.c def.h
	$(CC) -c any.c

masking.o: masking.c def.h
	$(CC) -c masking.c

setbits.o: setbits.c def.h
	$(CC) -c setbits.c

invert.o: invert.c def.h
	$(CC) -c invert.c

bitcount.o: bitcount.c def.h
	$(CC) -c bitcount.c

lower.o: lower.c def.h
	$(CC) -c lower.c

binsearch.o: binsearch.c def.h
	$(CC) -c binsearch.c

escape.o: escape.c def.h
	$(CC) -c escape.c

atoi.o: atoi.c def.h
	$(CC) -c atoi.c

shellsort.o: shellsort.c def.h
	$(CC) -c shellsort.c

reverse.o: reverse.c def.h
	$(CC) -c reverse.c

itoa.o: itoa.c def.h
	$(CC) -c itoa.c

itob.o: itob.c def.h
	$(CC) -c itob.c

goto.o: goto.c def.h
	$(CC) -c goto.c

grep.o: grep.c def.h
	$(CC) -c grep.c

trim.o: trim.c def.h
	$(CC) -c trim.c

expand.o: expand.c def.h
	$(CC) -c expand.c

build: $(wildcard *.c)
	$(CC) -c $?

format:
	clang-format -i *.c

clean:
	rm *.o
	rm *.out
