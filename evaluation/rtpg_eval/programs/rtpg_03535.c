int __arr_3535[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 86;
    int v2 = 18;
    int v3 = 78;
    int i;
    for (i = 0; i < 10; i++) { __arr_3535[i] = v0 + i; }
    v1 = v1 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 / (v2 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
