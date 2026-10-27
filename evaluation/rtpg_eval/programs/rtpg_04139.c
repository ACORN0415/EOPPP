int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 86;
    int v1 = 15;
    int v2 = 91;
    int i;
    if (v2 > v2) { v2 = v2; }
    v2 = 33;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
