int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 69;
    int v2 = 17;
    int v3 = 12;
    int v4 = 41;
    int v5 = 29;
    int i;
    v4 = v4 * 2;
    v4 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v5 = v5 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
