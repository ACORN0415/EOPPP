int __arr_741[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 3;
    int v2 = 75;
    int i;
    for (i = 0; i < 10; i++) { __arr_741[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
