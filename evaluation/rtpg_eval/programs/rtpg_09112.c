int __arr_9112[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 22;
    int v2 = 69;
    int i;
    v2 = 96;
    for (i = 0; i < 10; i++) { __arr_9112[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__p = &v1;
    *__p = *__p + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
