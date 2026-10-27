int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 97;
    int v2 = 32;
    int v3 = 58;
    int i;
    v3 = 16;
    v0 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
