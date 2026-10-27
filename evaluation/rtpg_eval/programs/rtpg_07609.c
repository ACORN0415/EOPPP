int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 64;
    int v2 = 25;
    int v3 = 11;
    int v4 = 3;
    int i;
    v3 = v3 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
