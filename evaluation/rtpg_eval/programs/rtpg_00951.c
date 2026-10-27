int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 14;
    int v1 = 32;
    int v2 = 72;
    int v3 = 47;
    int v4 = 32;
    int v5 = 62;
    int v6 = 10;
    int v7 = 49;
    int i;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
