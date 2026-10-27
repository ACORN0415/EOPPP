int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 87;
    int v2 = 43;
    int v3 = 10;
    int v4 = 15;
    int i;
    v4 = v4 + v0;
    v4 = v4 - v3;
    v1 = 13;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v0 = __arr_didx[__idx_didx[0]];
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
