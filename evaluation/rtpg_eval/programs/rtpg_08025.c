int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 17;
    int v2 = 81;
    int v3 = 9;
    int v4 = 28;
    int v5 = 9;
    int v6 = 69;
    int v7 = 9;
    int i;
    v6 = v6 + v2;
    int *__p = &v6;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
