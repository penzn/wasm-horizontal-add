CXX=clang++
CFLAGS=-O2 --target=wasm32 -msimd128
LFLAGS=-Wl,--import-memory,--no-entry,--export-all -nostdlib

PROG=horizontal-add
FILES=horizontal-add.cc test.cc

$(PROG).wasm: $(FILES)
	$(CXX) $(CFLAGS) $(LFLAGS) $^ -o $@

clean:
	rm -f $(PROG).wasm
