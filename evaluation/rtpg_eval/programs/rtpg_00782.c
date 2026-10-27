int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 29;
    int v2 = 20;
    int v3 = 62;
    int v4 = 50;
    int v5 = 46;
    int i;
    v2 = v2 - v1;
    if (v5 > v0) { v5 = v0; }
    v5 = v5 ^ v2;
    v1 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
