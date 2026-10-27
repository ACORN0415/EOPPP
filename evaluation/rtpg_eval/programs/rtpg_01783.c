int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 90;
    int v2 = 89;
    int i;
    if (v1 > v2) { v1 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v1 = __arr_didx[__idx_didx[0]];
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
