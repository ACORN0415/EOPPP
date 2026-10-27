int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 17;
    int v2 = 4;
    int v3 = 38;
    int v4 = 3;
    int v5 = 31;
    int v6 = 50;
    int v7 = 100;
    int i;
    if (v7 > v5) { v7 = v5; }
    v7 = v7 - v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
