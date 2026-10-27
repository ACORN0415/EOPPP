int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 41;
    int v2 = 2;
    int v3 = 16;
    int v4 = 34;
    int v5 = 61;
    int v6 = 50;
    int v7 = 92;
    int i;
    v3 = v3 + v3;
    v3 = v3 * 6;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v6;
    }
    int *__p = &v5;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
