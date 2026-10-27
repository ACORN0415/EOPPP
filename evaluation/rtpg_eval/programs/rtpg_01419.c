int __arr_1419[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 9;
    int v2 = 23;
    int v3 = 42;
    int v4 = 57;
    int v5 = 29;
    int i;
    v2 = v2 + v0;
    v5 = 61;
    for (i = 0; i < 10; i++) { __arr_1419[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v3 = v3 | v5;
    return v0;
}
int main(void) { return test_func(); }
