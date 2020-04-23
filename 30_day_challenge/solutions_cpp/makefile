CXXFLAGS = -std=c++11
LDFLAGS =
CFLAGS = -Wall -Weffc++ -Werror -pedantic -g
OBJ_LIST = main.o

main: $(OBJ_LIST)
	$(CXX) $(CFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf *.o main
