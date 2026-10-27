int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 82;
    int v1 = 55;
    int v2 = 88;
    int v3 = 73;
    int v4 = 28;
    int i;
    v1 = 30;
    if (v4 > v2) { v4 = v2; }
    v3 = __helper(v3);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
