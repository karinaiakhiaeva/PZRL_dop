CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
TARGET = min_circle
SOURCES = min_circle.cpp main.cpp

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
