CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = Lab07
OBJS = Cylinder.o main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

Cylinder.o: Cylinder.cpp Cylinder.h
	$(CXX) $(CXXFLAGS) -c Cylinder.cpp

main.o: main.cpp Cylinder.h
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f *.o $(TARGET)
