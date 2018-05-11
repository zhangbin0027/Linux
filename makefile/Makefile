SOURCES:=$(wildcard *.c)
OBJS:=$(patsubst %.c,%.o,$(SOURCES))
CC:=gcc
CFLAGS:=-g -Wall
main:$(OBJS)
	gcc $^ -o $@
.PHONY:clean
clean:
	rm -f $(OBJS) main
