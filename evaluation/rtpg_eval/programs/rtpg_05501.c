int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 84;
    int v2 = 35;
    int v3 = 0;
    int v4 = 13;
    int v5 = 27;
    int i;
    v0 = v0 * 10;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v2;
    }
    v4 = __arr_didx[__idx_didx[0]];
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
