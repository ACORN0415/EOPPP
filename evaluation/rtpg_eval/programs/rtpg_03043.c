int __arr_3043[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 35;
    int v2 = 0;
    int v3 = 41;
    int v4 = 75;
    int v5 = 76;
    int v6 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_3043[i] = v1 + i; }
    v2 = v2 + v5;
    v1 = v1 / (v3 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
