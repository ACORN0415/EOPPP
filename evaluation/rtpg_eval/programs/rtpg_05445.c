int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 8;
    int v1 = 18;
    int v2 = 21;
    int v3 = 15;
    int v4 = 62;
    int i;
    v3 = v3 + v1;
    v4 = v4 / (v0 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
