int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 58;
    int v2 = 30;
    int v3 = 9;
    int v4 = 65;
    int v5 = 55;
    int i;
    v3 = v3 * 8;
    if (v0 > v5) { v0 = v5; }
    int *__p = &v2;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
