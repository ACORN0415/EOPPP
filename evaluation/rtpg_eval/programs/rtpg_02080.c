int test_func(void) {
    int v0 = 69;
    int v1 = 77;
    int v2 = 18;
    int i;
    v1 = 62;
    v0 = v0 - v1;
    v2 = v2 + v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
