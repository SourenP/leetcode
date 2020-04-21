CXX = clang++
CXXFLAGS = -std=c++11 -stdlib=libc++
LDFLAGS =
CFLAGS = -Wall -Weffc++ -Werror -pedantic -g
OBJ_LIST = main_cpp.o

main_cpp: $(OBJ_LIST)
	$(CXX) $(CFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf *.o main main_cpp
