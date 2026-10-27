int __arr_7193[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 62;
    int v2 = 45;
    int v3 = 73;
    int i;
    v1 = v1 + v2;
    for (i = 0; i < 10; i++) { __arr_7193[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
