int __arr_2116[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 78;
    int v2 = 32;
    int v3 = 73;
    int v4 = 24;
    int v5 = 77;
    int i;
    for (i = 0; i < 10; i++) { __arr_2116[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
