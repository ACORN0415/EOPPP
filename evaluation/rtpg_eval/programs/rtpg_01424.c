int __arr_1424[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 38;
    int v2 = 90;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_1424[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
