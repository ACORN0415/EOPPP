int __arr_468[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 84;
    int v2 = 35;
    int v3 = 5;
    int v4 = 11;
    int v5 = 77;
    int v6 = 33;
    int v7 = 67;
    int i;
    for (i = 0; i < 10; i++) { __arr_468[i] = v6 + i; }
    v4 = v4 - v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
