int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 87;
    int v2 = 56;
    int v3 = 21;
    int v4 = 64;
    int i;
    if (v1 > v3) { v1 = v3; }
    v1 = v1 + v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
