int __arr_1875[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 32;
    int v2 = 23;
    int v3 = 56;
    int v4 = 88;
    int i;
    for (i = 0; i < 10; i++) { __arr_1875[i] = v1 + i; }
    if (v0 > v3) { v0 = v3; }
    v2 = v2 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
