int __arr_3080[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 11;
    int v2 = 93;
    int v3 = 36;
    int v4 = 87;
    int v5 = 52;
    int i;
    for (i = 0; i < 10; i++) { __arr_3080[i] = v4 + i; }
    for (i = 0; i < 16; i++) {
        v3 = v3 + v4;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 | v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
