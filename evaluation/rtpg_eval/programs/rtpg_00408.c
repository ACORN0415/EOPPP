int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 15;
    int v2 = 92;
    int v3 = 95;
    int v4 = 22;
    int v5 = 96;
    int i;
    if (v2 > v3) { v2 = v3; }
    v5 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
