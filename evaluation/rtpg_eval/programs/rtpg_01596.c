int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 24;
    int v1 = 81;
    int v2 = 5;
    int v3 = 82;
    int v4 = 4;
    int i;
    v0 = v0 - v3;
    if (v4 > v3) { v4 = v3; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
