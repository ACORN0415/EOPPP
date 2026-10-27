int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 14;
    int v1 = 8;
    int v2 = 35;
    int v3 = 8;
    int v4 = 58;
    int v5 = 28;
    int i;
    if (v0 > v4) { v0 = v4; }
    v4 = v4 - v0;
    v0 = 7;
    v5 = __helper(v5);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
