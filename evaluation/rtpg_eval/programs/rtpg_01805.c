int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 64;
    int v2 = 64;
    int v3 = 71;
    int v4 = 94;
    int v5 = 11;
    int v6 = 100;
    int i;
    if (v0 > v2) { v0 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
