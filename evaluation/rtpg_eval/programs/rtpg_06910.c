int __arr_6910[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 33;
    int v2 = 61;
    int v3 = 53;
    int v4 = 42;
    int v5 = 10;
    int v6 = 58;
    int v7 = 25;
    int i;
    for (i = 0; i < 10; i++) { __arr_6910[i] = v6 + i; }
    if (v0 > v4) { v0 = v4; }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    v7 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
