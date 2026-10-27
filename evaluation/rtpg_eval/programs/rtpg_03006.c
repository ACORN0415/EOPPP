int __arr_3006[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 76;
    int v2 = 19;
    int v3 = 99;
    int v4 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_3006[i] = v4 + i; }
    for (i = 0; i < 6; i++) {
        v1 = v1 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v2 = v2 / (v4 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
