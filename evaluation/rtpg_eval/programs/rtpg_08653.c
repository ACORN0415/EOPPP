int __arr_8653[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 85;
    int v2 = 100;
    int v3 = 29;
    int v4 = 76;
    int v5 = 79;
    int v6 = 75;
    int v7 = 22;
    int i;
    v0 = 82;
    v3 = v3 - v0;
    for (i = 0; i < 10; i++) { __arr_8653[i] = v4 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
