int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 16;
    int v2 = 68;
    int v3 = 14;
    int i;
    v0 = 79;
    v0 = v0 * 9;
    v0 = v0 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
