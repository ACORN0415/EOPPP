int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 8;
    int v1 = 27;
    int v2 = 16;
    int i;
    v0 = v0 + v2;
    v2 = 95;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v2;
    }
    v0 = __helper(v0);
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
