int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 90;
    int v1 = 38;
    int v2 = 57;
    int v3 = 11;
    int v4 = 1;
    int v5 = 78;
    int v6 = 58;
    int v7 = 56;
    int i;
    v1 = v1 - v5;
    v0 = __helper(v0);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    v3 = v3 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
