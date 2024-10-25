CC = gcc

CFLAGS = -Iinc

SRC = src/main.c src/utils.c

TARGET = my_program

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)