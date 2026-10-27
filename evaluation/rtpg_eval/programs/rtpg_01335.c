int __arr_1335[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 88;
    int v2 = 39;
    int v3 = 20;
    int v4 = 64;
    int v5 = 84;
    int v6 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_1335[i] = v0 + i; }
    v4 = 42;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
