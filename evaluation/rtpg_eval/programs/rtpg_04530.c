int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 98;
    int v1 = 72;
    int v2 = 76;
    int v3 = 93;
    int v4 = 3;
    int v5 = 64;
    int v6 = 68;
    int i;
    v6 = v6 + v2;
    for (i = 0; i < 19; i++) {
        v5 = v5 + v5;
    }
    if (v1 > v1) { v1 = v1; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
