int __arr_2364[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 41;
    int v2 = 30;
    int v3 = 30;
    int v4 = 5;
    int v5 = 86;
    int v6 = 28;
    int v7 = 4;
    int i;
    for (i = 0; i < 10; i++) { __arr_2364[i] = v4 + i; }
    v1 = 48;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    v3 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
