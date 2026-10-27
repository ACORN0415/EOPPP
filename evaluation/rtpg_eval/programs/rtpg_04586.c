int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4586[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 34;
    int v2 = 100;
    int v3 = 68;
    int v4 = 91;
    int i;
    if (v1 > v1) { v1 = v1; }
    for (i = 0; i < 10; i++) { __arr_4586[i] = v4 + i; }
    v3 = 23;
    v1 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
