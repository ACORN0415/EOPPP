int __arr_4805[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 72;
    int v2 = 74;
    int v3 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_4805[i] = v2 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
