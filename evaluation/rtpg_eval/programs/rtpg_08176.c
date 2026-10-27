int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 2;
    int v1 = 26;
    int v2 = 72;
    int i;
    v1 = v1 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
