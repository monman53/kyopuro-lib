.PHONY: test

all: build/kyopuro.hpp build/test

build/kyopuro.hpp: include/main.hpp include/math.hpp
	mkdir -p build
	g++ -E include/main.hpp -P > build/kyopuro.hpp

build/test: build/kyopuro.hpp test/main.cpp
	g++ test/main.cpp -o build/test

clean:
	rm -rf build
