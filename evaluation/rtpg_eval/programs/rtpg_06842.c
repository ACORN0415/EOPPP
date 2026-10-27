int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 2;
    int v2 = 37;
    int v3 = 9;
    int v4 = 24;
    int v5 = 57;
    int v6 = 42;
    int i;
    v1 = v1 * 10;
    v6 = __helper(v6);
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
