int __arr_9671[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 32;
    int v2 = 83;
    int v3 = 31;
    int v4 = 88;
    int i;
    for (i = 0; i < 10; i++) { __arr_9671[i] = v2 + i; }
    for (i = 0; i < 10; i++) {
        v0 = v0 + v3;
    }
    v4 = v4 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
