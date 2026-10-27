int __arr_3662[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 24;
    int v2 = 34;
    int v3 = 19;
    int i;
    v1 = v1 * 5;
    for (i = 0; i < 10; i++) { __arr_3662[i] = v0 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    v2 = v2 | v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
