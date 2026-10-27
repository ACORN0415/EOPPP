int __arr_7204[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 96;
    int v2 = 71;
    int v3 = 40;
    int v4 = 14;
    int v5 = 72;
    int v6 = 99;
    int v7 = 41;
    int i;
    for (i = 0; i < 10; i++) { __arr_7204[i] = v3 + i; }
    v3 = v3 + v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v3 = v3 | v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
