int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 34;
    int v1 = 4;
    int v2 = 79;
    int v3 = 7;
    int v4 = 95;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
