int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 27;
    int v2 = 17;
    int v3 = 93;
    int v4 = 52;
    int v5 = 3;
    int i;
    if (v0 > v5) { v0 = v5; }
    v1 = v1 + v1;
    v2 = v2 - v5;
    v4 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
