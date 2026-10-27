int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 28;
    int v1 = 9;
    int v2 = 63;
    int v3 = 72;
    int v4 = 5;
    int v5 = 58;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
