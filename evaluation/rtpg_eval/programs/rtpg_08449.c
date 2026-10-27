int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 4;
    int v2 = 41;
    int v3 = 47;
    int v4 = 86;
    int v5 = 92;
    int v6 = 63;
    int v7 = 70;
    int i;
    v0 = 45;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v7;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
