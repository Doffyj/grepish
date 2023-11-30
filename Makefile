CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src
SRCS = $(wildcard $(SRC_DIR)/*.c)
HEADER = grepish.h
TARGET = grepish

all: $(TARGET)

$(TARGET): $(SRCS) $(HEADER)
	$(CC) $(CFLAGS) -o $@ $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean