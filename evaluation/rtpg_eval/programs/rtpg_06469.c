int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 91;
    int v2 = 26;
    int v3 = 96;
    int i;
    v1 = v1 * 6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v0 = v0 | v3;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
