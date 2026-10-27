int __arr_5157[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 8;
    int v2 = 6;
    int v3 = 90;
    int v4 = 91;
    int i;
    v4 = v4 - v2;
    for (i = 0; i < 10; i++) { __arr_5157[i] = v4 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
