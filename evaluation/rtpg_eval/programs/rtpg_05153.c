int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 27;
    int v1 = 71;
    int v2 = 5;
    int v3 = 78;
    int v4 = 40;
    int v5 = 2;
    int i;
    v2 = v2 - v0;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v4;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
