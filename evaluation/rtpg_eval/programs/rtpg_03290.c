int __arr_3290[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 64;
    int v2 = 81;
    int i;
    for (i = 0; i < 10; i++) { __arr_3290[i] = v0 + i; }
    for (i = 0; i < 10; i++) {
        v2 = v2 + v1;
    }
    v0 = v0 * 7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
