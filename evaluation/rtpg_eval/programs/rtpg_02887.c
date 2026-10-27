int __arr_2887[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 70;
    int v2 = 88;
    int v3 = 11;
    int v4 = 5;
    int i;
    for (i = 0; i < 10; i++) { __arr_2887[i] = v3 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
