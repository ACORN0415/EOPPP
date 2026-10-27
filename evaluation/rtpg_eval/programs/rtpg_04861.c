int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 1;
    int v2 = 82;
    int v3 = 6;
    int v4 = 95;
    int v5 = 72;
    int v6 = 27;
    int i;
    for (i = 0; i < 14; i++) {
        v6 = v6 + v0;
    }
    v5 = v5 - v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
