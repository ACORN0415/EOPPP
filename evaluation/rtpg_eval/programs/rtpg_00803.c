int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 87;
    int v2 = 25;
    int v3 = 93;
    int v4 = 4;
    int v5 = 72;
    int v6 = 75;
    int v7 = 55;
    int i;
    if (v0 > v4) { v0 = v4; }
    v7 = v7 + v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
