int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 14;
    int v1 = 76;
    int v2 = 75;
    int v3 = 6;
    int v4 = 85;
    int i;
    v1 = 3;
    if (v1 > v4) { v1 = v4; }
    v2 = v2 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
