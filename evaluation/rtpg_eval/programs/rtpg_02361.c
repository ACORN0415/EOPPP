int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 55;
    int v2 = 34;
    int v3 = 67;
    int i;
    v0 = v0 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
