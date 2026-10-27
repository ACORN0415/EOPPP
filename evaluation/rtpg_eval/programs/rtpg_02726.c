int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 26;
    int v1 = 32;
    int v2 = 57;
    int v3 = 19;
    int v4 = 90;
    int i;
    v2 = 41;
    if (v3 > v0) { v3 = v0; }
    v1 = __helper(v1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
