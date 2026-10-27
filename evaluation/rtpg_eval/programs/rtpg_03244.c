int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 41;
    int v2 = 73;
    int v3 = 86;
    int v4 = 8;
    int v5 = 94;
    int i;
    v5 = v5 + v2;
    v2 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
