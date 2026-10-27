int __arr_8918[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 99;
    int v2 = 98;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 10; i++) { __arr_8918[i] = v0 + i; }
    v1 = 46;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
