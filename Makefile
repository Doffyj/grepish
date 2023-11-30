CC = gcc
CFLAGS = -Wall -Wextra -Werror
DIR = src
SRCS = $(wildcard $(DIR)/*.c)
HEADER = $(DIR)/grepish.h
TARGET = grepish

all: $(TARGET)

$(TARGET): $(SRCS) $(HEADER)
	$(CC) $(CFLAGS) -o $@ $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean