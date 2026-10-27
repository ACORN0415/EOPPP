int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 57;
    int v1 = 34;
    int v2 = 89;
    int v3 = 88;
    int v4 = 50;
    int v5 = 13;
    int v6 = 29;
    int i;
    v3 = 46;
    v6 = __helper(v6);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
