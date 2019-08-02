#include "horizontal-add.h"

extern "C" {

float4 v{1.0, 2.0, 3.0, 4.0};
float num;

void test_scalar(unsigned count) {
  for (int i = 0; i < count; ++i) {
    num = horizontal_add_scalar(v);
  }
}

void test_add1(unsigned count) {
  for (int i = 0; i < count; ++i) {
    num = horizontal_add(v);
  }
}

void test_add2(unsigned count) {
  for (int i = 0; i < count; ++i) {
    num = horizontal_add_oddeven(v);
  }
}

} // extern "C"
