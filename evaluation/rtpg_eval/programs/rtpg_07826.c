int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 85;
    int v2 = 59;
    int v3 = 55;
    int v4 = 52;
    int v5 = 80;
    int i;
    if (v5 > v0) { v5 = v0; }
    v5 = v5 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
