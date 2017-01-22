OBJ = Add

all: $(OBJ)

$(OBJ): main.o add.o
	g++ main.o add.o -w -o $(OBJ)

main.o: main.cpp
	g++ -c main.cpp

add.o: add.cpp
	g++ -c add.cpp

clean:
	rm *.o $(OBJ)