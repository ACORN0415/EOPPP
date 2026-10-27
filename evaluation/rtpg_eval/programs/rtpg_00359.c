int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 39;
    int v2 = 0;
    int v3 = 67;
    int v4 = 79;
    int v5 = 25;
    int i;
    v0 = v0 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
