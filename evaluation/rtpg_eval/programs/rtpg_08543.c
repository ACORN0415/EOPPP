int test_func(void) {
    int v0 = 47;
    int v1 = 7;
    int v2 = 62;
    int i;
    v2 = v2 * 10;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
