CC = gcc
CFLAGS = -Wall -g

all: main

main: main.o parser.o
	$(CC) -o $@ $^

clean:
	rm -f *.o main libparser.a libparser.so

# 静态库
static: parser.o
	ar rcs libparser.a parser.o
	$(CC) -o main_static main.c libparser.a

# 动态库
shared: parser.o
	$(CC) -fPIC -shared -o libparser.so parser.c
	$(CC) -o main_shared main.c -L. -lparser
