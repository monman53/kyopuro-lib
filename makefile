.PHONY: test

TARGETS = build/all.hpp build/math.hpp

build/%.hpp: include/%.hpp include/*.hpp
	mkdir -p build
	cat include/system.hpp > $@
	g++ -E -C -P -DBUILD=1 -nostdinc $< >> $@

all: $(TARGETS)

test: all
	oj-verify run

clean:
	rm -f build/*.hpp
	rmdir build
