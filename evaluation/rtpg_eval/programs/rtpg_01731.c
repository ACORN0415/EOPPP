int __arr_1731[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 8;
    int v2 = 2;
    int v3 = 89;
    int v4 = 3;
    int i;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_1731[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
