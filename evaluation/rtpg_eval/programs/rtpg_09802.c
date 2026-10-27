int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 42;
    int v2 = 92;
    int v3 = 79;
    int v4 = 3;
    int v5 = 97;
    int v6 = 40;
    int i;
    if (v1 > v1) { v1 = v1; }
    v5 = 35;
    v5 = v5 * 2;
    int *__p = &v2;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
