int __arr_6959[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 17;
    int v2 = 81;
    int v3 = 25;
    int v4 = 76;
    int v5 = 28;
    int v6 = 96;
    int v7 = 84;
    int i;
    v3 = v3 - v5;
    for (i = 0; i < 10; i++) { __arr_6959[i] = v7 + i; }
    v0 = v0 * 3;
    v5 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
