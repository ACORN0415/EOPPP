int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 25;
    int v1 = 99;
    int v2 = 88;
    int v3 = 69;
    int v4 = 87;
    int v5 = 27;
    int v6 = 74;
    int i;
    v5 = v5 + v1;
    v2 = v2 * 8;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
