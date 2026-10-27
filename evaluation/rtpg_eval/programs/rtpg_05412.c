int __arr_5412[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 29;
    int v2 = 15;
    int v3 = 3;
    int v4 = 41;
    int v5 = 59;
    int v6 = 29;
    int i;
    for (i = 0; i < 10; i++) { __arr_5412[i] = v5 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
