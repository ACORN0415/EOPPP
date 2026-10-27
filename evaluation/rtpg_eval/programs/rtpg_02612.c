int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 16;
    int v2 = 54;
    int v3 = 78;
    int i;
    v1 = v1 + v1;
    v3 = 57;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
