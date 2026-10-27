int __arr_2118[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 8;
    int v2 = 68;
    int v3 = 14;
    int v4 = 77;
    int v5 = 31;
    int v6 = 72;
    int i;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_2118[i] = v0 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v5 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
