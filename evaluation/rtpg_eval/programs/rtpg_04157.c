int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4157[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 64;
    int v2 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_4157[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v1 = __helper(v1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
