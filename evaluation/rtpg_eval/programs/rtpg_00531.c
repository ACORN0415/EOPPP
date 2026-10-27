int __arr_531[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 79;
    int v1 = 31;
    int v2 = 78;
    int v3 = 76;
    int i;
    v1 = v1 - v3;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 10; i++) { __arr_531[i] = v1 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    v3 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
