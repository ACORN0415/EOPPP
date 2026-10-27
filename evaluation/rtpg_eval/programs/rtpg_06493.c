int __arr_6493[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 17;
    int v2 = 30;
    int v3 = 23;
    int v4 = 91;
    int v5 = 36;
    int v6 = 77;
    int i;
    for (i = 0; i < 10; i++) { __arr_6493[i] = v3 + i; }
    if (v0 > v5) { v0 = v5; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
