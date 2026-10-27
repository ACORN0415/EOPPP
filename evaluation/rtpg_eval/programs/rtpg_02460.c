int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 40;
    int v1 = 18;
    int v2 = 71;
    int v3 = 27;
    int v4 = 58;
    int v5 = 0;
    int v6 = 58;
    int v7 = 82;
    int i;
    v1 = 13;
    v2 = v2 * 8;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
