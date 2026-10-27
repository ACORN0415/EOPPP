int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 50;
    int v1 = 36;
    int v2 = 29;
    int v3 = 22;
    int v4 = 4;
    int v5 = 21;
    int v6 = 42;
    int i;
    v4 = 100;
    v1 = v1 - v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
