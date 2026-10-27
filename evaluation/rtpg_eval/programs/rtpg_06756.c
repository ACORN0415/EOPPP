int __arr_6756[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 42;
    int v2 = 69;
    int v3 = 37;
    int v4 = 77;
    int i;
    v0 = v0 + v3;
    for (i = 0; i < 10; i++) { __arr_6756[i] = v3 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
