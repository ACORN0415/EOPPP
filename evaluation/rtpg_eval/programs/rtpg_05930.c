int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 88;
    int v1 = 61;
    int v2 = 15;
    int v3 = 77;
    int v4 = 28;
    int v5 = 34;
    int i;
    v4 = v4 * 3;
    v0 = 63;
    v1 = v1 + v4;
    v4 = __helper(v4);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
