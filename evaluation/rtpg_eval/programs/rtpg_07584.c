int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 1;
    int v2 = 98;
    int v3 = 93;
    int v4 = 90;
    int v5 = 54;
    int v6 = 16;
    int v7 = 61;
    int i;
    for (i = 0; i < 18; i++) {
        v6 = v6 + v7;
    }
    v7 = v7 + v7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
