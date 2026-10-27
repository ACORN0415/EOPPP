int __arr_7312[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 99;
    int v2 = 70;
    int v3 = 56;
    int i;
    v0 = v0 * 7;
    for (i = 0; i < 10; i++) { __arr_7312[i] = v1 + i; }
    if (v0 > v1) { v0 = v1; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
