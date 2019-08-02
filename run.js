const N = 100000; // Number of iterations
print("Number of iterations: " + N);
var imports = {memory: new WebAssembly.Memory({initial: 2})};
const module = new WebAssembly.Module(readbuffer('horizontal-add.wasm'));
const instance = new WebAssembly.Instance(module, { "env" : imports }).exports;

var tStart = Date.now();
instance.test_scalar(N);
var tEnd = Date.now();
let t = tEnd - tStart;
print("Scalar horizontal add: " + t + " ms");

tStart = Date.now();
instance.test_add1(N);
tEnd = Date.now();
t = tEnd - tStart;
print("SIMD horizontal add #1: " + t + " ms");

