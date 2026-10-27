int test_func(void) {
    int v0 = 100;
    int v1 = 50;
    int v2 = 76;
    int i;
    v1 = v1 + v2;
    v2 = v2 * 5;
    if (v2 > v2) { v2 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
