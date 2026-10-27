int test_func(void) {
    int v0 = 19;
    int v1 = 81;
    int v2 = 0;
    int i;
    if (v2 > v2) { v2 = v2; }
    v2 = v2 * 2;
    v2 = v2 & v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
