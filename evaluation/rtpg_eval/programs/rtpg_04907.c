int __arr_4907[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 87;
    int v2 = 45;
    int v3 = 23;
    int v4 = 65;
    int v5 = 25;
    int v6 = 33;
    int i;
    for (i = 0; i < 10; i++) { __arr_4907[i] = v1 + i; }
    v1 = v1 - v6;
    v2 = 70;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
