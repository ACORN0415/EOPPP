int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 4;
    int v1 = 61;
    int v2 = 23;
    int v3 = 29;
    int v4 = 75;
    int v5 = 7;
    int v6 = 70;
    int v7 = 74;
    int i;
    v6 = v6 * 10;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v5 = __helper(v5);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
