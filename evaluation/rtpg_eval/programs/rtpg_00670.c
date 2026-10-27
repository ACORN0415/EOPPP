int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 38;
    int v2 = 9;
    int v3 = 90;
    int i;
    v3 = 96;
    v0 = v0 * 9;
    v2 = v2 + v0;
    int *__p = &v2;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
