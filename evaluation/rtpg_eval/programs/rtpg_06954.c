int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 47;
    int v1 = 6;
    int v2 = 78;
    int v3 = 65;
    int v4 = 81;
    int v5 = 60;
    int v6 = 16;
    int v7 = 90;
    int i;
    v7 = 91;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v0;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
