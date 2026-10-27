int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 27;
    int v1 = 56;
    int v2 = 26;
    int v3 = 54;
    int v4 = 37;
    int v5 = 11;
    int v6 = 2;
    int v7 = 95;
    int i;
    v3 = v3 * 6;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
