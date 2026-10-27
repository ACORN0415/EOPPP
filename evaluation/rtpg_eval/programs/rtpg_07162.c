int test_func(void) {
    int v0 = 19;
    int v1 = 56;
    int v2 = 28;
    int v3 = 73;
    int i;
    v0 = v0 * 10;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
