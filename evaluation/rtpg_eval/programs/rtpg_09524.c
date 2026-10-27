int __arr_9524[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 17;
    int v2 = 64;
    int v3 = 67;
    int v4 = 15;
    int v5 = 26;
    int v6 = 3;
    int v7 = 83;
    int i;
    v0 = v0 * 5;
    for (i = 0; i < 10; i++) { __arr_9524[i] = v1 + i; }
    v0 = v0 - v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
