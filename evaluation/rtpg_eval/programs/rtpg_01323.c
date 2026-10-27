int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 17;
    int v2 = 84;
    int v3 = 21;
    int v4 = 69;
    int v5 = 9;
    int i;
    v4 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
