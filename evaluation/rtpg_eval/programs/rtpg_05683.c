int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5683[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 11;
    int v2 = 59;
    int v3 = 70;
    int i;
    for (i = 0; i < 10; i++) { __arr_5683[i] = v1 + i; }
    for (i = 0; i < 10; i++) {
        v1 = v1 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v1 = __helper(v1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
