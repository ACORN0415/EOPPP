int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 5;
    int v2 = 15;
    int v3 = 1;
    int v4 = 63;
    int v5 = 58;
    int v6 = 82;
    int i;
    v5 = v5 - v3;
    v6 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
