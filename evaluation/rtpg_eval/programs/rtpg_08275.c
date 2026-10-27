int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 40;
    int v2 = 1;
    int v3 = 21;
    int v4 = 41;
    int v5 = 56;
    int v6 = 100;
    int i;
    v5 = 67;
    v1 = v1 + v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    v0 = __helper(v0);
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
