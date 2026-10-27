int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 73;
    int v2 = 35;
    int v3 = 89;
    int v4 = 16;
    int v5 = 87;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v0;
    }
    v2 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
