int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 11;
    int v2 = 55;
    int v3 = 22;
    int v4 = 52;
    int v5 = 6;
    int i;
    v2 = v2 - v1;
    v1 = v1 + v5;
    if (v1 > v3) { v1 = v3; }
    v3 = __arr_didx[__idx_didx[0]];
    v3 = __helper(v3);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
