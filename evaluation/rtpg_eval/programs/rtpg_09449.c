int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 82;
    int v1 = 9;
    int v2 = 13;
    int v3 = 9;
    int v4 = 23;
    int v5 = 16;
    int v6 = 25;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v3;
    }
    v2 = __helper(v2);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
