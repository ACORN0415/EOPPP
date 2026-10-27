int test_func(void) {
    int v0 = 87;
    int v1 = 48;
    int v2 = 3;
    int v3 = 3;
    int v4 = 20;
    int i;
    v2 = v2 + v1;
    v3 = 64;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
