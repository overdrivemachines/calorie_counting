
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

calorie_counting: calorie_counting.o
	$(CC) $(CFLAGS) -o calorie_counting calorie_counting.o

calorie_counting.o: calorie_counting.cpp
	$(CC) $(CFLAGS) -c calorie_counting.cpp

clean:
	rm -rf calorie_counting calorie_counting.o
