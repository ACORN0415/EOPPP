int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6559[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 58;
    int v2 = 39;
    int v3 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_6559[i] = v3 + i; }
    v1 = v1 - v0;
    v1 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
