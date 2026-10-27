int __arr_8534[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 31;
    int v2 = 62;
    int i;
    for (i = 0; i < 10; i++) { __arr_8534[i] = v1 + i; }
    v2 = v2 + v0;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
