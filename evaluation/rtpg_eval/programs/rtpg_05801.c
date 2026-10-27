int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 28;
    int v2 = 57;
    int v3 = 41;
    int v4 = 93;
    int v5 = 28;
    int v6 = 40;
    int v7 = 72;
    int i;
    if (v3 > v4) { v3 = v4; }
    v5 = 42;
    for (i = 0; i < 5; i++) {
        v7 = v7 + v5;
    }
    v4 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
