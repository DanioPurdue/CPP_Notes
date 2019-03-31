CC = g++
CFLAGS = -c -Wall -Werror -std=c++11
LDFFLAGS =
SOURCES = main.cpp HeadQuarter.cpp Warrior.cpp 
OBJFILES = Warrior.o HeadQuarter.o main.o 
TARGET = WoW

all: $(TARGET)

# combine all the makefiles to a single target.
$(TARGET): $(OBJFILES)
	$(CC) -o $(TARGET) $(OBJFILES) $(LDFFLAGS)

main.o: main.cpp HeadQuarter.o # dependencies
	$(CC) $(CFLAGS) main.cpp

HeadQuarter.o: HeadQuarter.cpp Warrior.o 
	$(CC) $(CFLAGS) HeadQuarter.cpp

Warrior.o: Warrior.cpp
	$(CC) $(CFLAGS) Warrior.cpp

clean:
	rm -f $(OBJFILES) $(TARGET) *~