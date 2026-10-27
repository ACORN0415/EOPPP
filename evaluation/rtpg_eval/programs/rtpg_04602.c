int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 71;
    int v1 = 88;
    int v2 = 38;
    int v3 = 28;
    int v4 = 19;
    int v5 = 63;
    int v6 = 25;
    int v7 = 43;
    int i;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v0;
    }
    v1 = __helper(v1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
