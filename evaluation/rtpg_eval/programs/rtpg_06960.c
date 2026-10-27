int __arr_6960[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 16;
    int v2 = 72;
    int v3 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_6960[i] = v3 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
