int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1662[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 48;
    int v2 = 92;
    int v3 = 30;
    int v4 = 17;
    int v5 = 87;
    int i;
    for (i = 0; i < 10; i++) { __arr_1662[i] = v0 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
