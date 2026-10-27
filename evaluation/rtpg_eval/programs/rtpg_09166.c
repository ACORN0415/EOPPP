int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 27;
    int v1 = 92;
    int v2 = 21;
    int v3 = 82;
    int v4 = 88;
    int v5 = 26;
    int v6 = 1;
    int i;
    v1 = v1 + v2;
    v5 = 95;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
