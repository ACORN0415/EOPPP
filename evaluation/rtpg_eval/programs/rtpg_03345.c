int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 26;
    int v1 = 13;
    int v2 = 28;
    int v3 = 4;
    int v4 = 62;
    int v5 = 89;
    int v6 = 11;
    int i;
    v0 = v0 - v3;
    v1 = v1 + v4;
    v4 = 72;
    v3 = __helper(v3);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
