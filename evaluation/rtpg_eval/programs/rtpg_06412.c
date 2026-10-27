int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 86;
    int v2 = 9;
    int v3 = 17;
    int v4 = 15;
    int v5 = 48;
    int i;
    if (v4 > v3) { v4 = v3; }
    v0 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
