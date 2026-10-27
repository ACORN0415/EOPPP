int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 35;
    int v2 = 34;
    int v3 = 22;
    int v4 = 48;
    int v5 = 45;
    int v6 = 97;
    int v7 = 32;
    int i;
    v0 = v0 - v1;
    v0 = 35;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
