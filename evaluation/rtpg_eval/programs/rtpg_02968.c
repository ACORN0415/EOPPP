int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 24;
    int v2 = 40;
    int v3 = 21;
    int v4 = 11;
    int v5 = 86;
    int i;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v4;
    }
    v4 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
