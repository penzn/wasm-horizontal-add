typedef float float4 __attribute__((ext_vector_type(4)));

extern "C" {

float horizontal_add_scalar(float4 x);
float horizontal_add(float4 x);
float horizontal_add_oddeven(float4 x);

} // extern "C"
