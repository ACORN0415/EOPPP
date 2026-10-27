int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 97;
    int v2 = 34;
    int v3 = 47;
    int v4 = 88;
    int v5 = 53;
    int v6 = 84;
    int v7 = 74;
    int i;
    for (i = 0; i < 13; i++) {
        v3 = v3 + v1;
    }
    v2 = v2 + v0;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
