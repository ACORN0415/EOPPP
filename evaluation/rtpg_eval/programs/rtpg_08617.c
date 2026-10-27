int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8617[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 58;
    int v2 = 30;
    int v3 = 13;
    int v4 = 27;
    int v5 = 59;
    int v6 = 33;
    int i;
    for (i = 0; i < 10; i++) { __arr_8617[i] = v6 + i; }
    if (v4 > v5) { v4 = v5; }
    v1 = __helper(v1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
