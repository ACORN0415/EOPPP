int __arr_5131[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 87;
    int v2 = 95;
    int v3 = 74;
    int v4 = 87;
    int v5 = 100;
    int v6 = 37;
    int v7 = 29;
    int i;
    v4 = v4 - v0;
    for (i = 0; i < 10; i++) { __arr_5131[i] = v7 + i; }
    for (i = 0; i < 15; i++) {
        v2 = v2 + v7;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
