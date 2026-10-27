int __arr_5301[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 48;
    int v2 = 92;
    int v3 = 3;
    int v4 = 10;
    int i;
    for (i = 0; i < 10; i++) { __arr_5301[i] = v1 + i; }
    v0 = v0 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
