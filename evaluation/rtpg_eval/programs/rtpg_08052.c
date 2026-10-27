int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 78;
    int v1 = 37;
    int v2 = 35;
    int v3 = 1;
    int v4 = 45;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v4 = v4 / (v1 + 1);
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
