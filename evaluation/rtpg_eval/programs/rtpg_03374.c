int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 65;
    int v1 = 88;
    int v2 = 22;
    int v3 = 57;
    int v4 = 60;
    int v5 = 24;
    int v6 = 4;
    int i;
    v0 = v0 * 2;
    v4 = v4 + v5;
    v6 = __helper(v6);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
