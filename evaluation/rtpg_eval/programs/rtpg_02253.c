int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 11;
    int v1 = 87;
    int v2 = 100;
    int v3 = 63;
    int v4 = 92;
    int v5 = 18;
    int v6 = 76;
    int i;
    if (v3 > v0) { v3 = v0; }
    v0 = v0 + v0;
    v0 = v0 - v3;
    v2 = __helper(v2);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
