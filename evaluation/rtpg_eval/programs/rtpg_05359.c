int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 60;
    int v1 = 86;
    int v2 = 54;
    int v3 = 90;
    int v4 = 14;
    int i;
    v1 = 91;
    v3 = v3 * 10;
    v0 = __helper(v0);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
