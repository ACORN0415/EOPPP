int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 62;
    int v2 = 77;
    int v3 = 84;
    int v4 = 96;
    int v5 = 75;
    int v6 = 76;
    int i;
    v6 = 56;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v4;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v4 = __arr_didx[__idx_didx[0]];
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
