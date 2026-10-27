int __arr_971[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 85;
    int v2 = 79;
    int i;
    for (i = 0; i < 10; i++) { __arr_971[i] = v0 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v2 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
