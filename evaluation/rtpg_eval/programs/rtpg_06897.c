int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6897[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 81;
    int v2 = 57;
    int i;
    for (i = 0; i < 10; i++) { __arr_6897[i] = v0 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
