#include "horizontal-add.h"

extern "C" {

float horizontal_add_scalar(float4 x) {
  return x.x + x.y + x.z + x.w;
}

float horizontal_add(float4 x) {
  auto partial_sum = x.xy + x.zw;
  return partial_sum.x + partial_sum.y;
}

float horizontal_add_oddeven(float4 x) {
  float4 y = x.yxwz; // lanes 1 0 3 2
  float4 sum = x + y;
  return (sum + sum.zwxy).x;
}

} // extern "C"
