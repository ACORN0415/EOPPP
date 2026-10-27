int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 71;
    int v2 = 62;
    int v3 = 9;
    int i;
    v3 = v3 + v1;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v2;
    }
    v0 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
