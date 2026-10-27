int __arr_2221[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 61;
    int v2 = 64;
    int v3 = 84;
    int v4 = 43;
    int v5 = 42;
    int v6 = 74;
    int v7 = 20;
    int i;
    for (i = 0; i < 10; i++) { __arr_2221[i] = v4 + i; }
    v7 = 9;
    for (i = 0; i < 16; i++) {
        v4 = v4 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
