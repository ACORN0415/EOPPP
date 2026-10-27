int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 34;
    int v1 = 51;
    int v2 = 38;
    int v3 = 24;
    int v4 = 64;
    int v5 = 38;
    int i;
    v1 = 53;
    v4 = v4 * 4;
    v0 = v0 - v3;
    v5 = __helper(v5);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
