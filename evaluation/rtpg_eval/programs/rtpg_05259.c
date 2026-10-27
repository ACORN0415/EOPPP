int __arr_5259[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 38;
    int v2 = 8;
    int v3 = 22;
    int v4 = 35;
    int v5 = 30;
    int v6 = 53;
    int i;
    if (v1 > v5) { v1 = v5; }
    for (i = 0; i < 9; i++) {
        v1 = v1 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_5259[i] = v5 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
