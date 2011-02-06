CC = gcc
SRC_DIR = src
SRC = ${SRC_DIR}/tty-solitaire.c
CFLAGS = -W -Wall -pedantic -ansi -std=c99
OUTPUT = bin/tty-solitaire
LIB_DIR = lib
DEBUG_DIR = debug
OBJECTS = ${LIB_DIR}/frame.o         \
          ${LIB_DIR}/card.o          \
          ${LIB_DIR}/stack.o         \
          ${LIB_DIR}/deck.o          \
          ${LIB_DIR}/util.o          \
          ${LIB_DIR}/cursor.o        \
          ${LIB_DIR}/keyboard.o      \
          ${LIB_DIR}/display.o       \
          ${LIB_DIR}/game.o          \
          ${DEBUG_DIR}/card_debug.o  \
          ${DEBUG_DIR}/stack_debug.o \
          ${DEBUG_DIR}/deck_debug.o
LDFLAGS = -lncursesw

tty-solitaire: ${OBJECTS}
	${CC} ${CFLAGS} ${LDFLAGS} ${SRC} -o ${OUTPUT} ${OBJECTS}

clean:
	rm -rf ${LIB_DIR}/*.o ${OUTPUT}