int __arr_3980[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 55;
    int v2 = 28;
    int v3 = 24;
    int v4 = 71;
    int v5 = 84;
    int i;
    v5 = v5 + v5;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_3980[i] = v5 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
