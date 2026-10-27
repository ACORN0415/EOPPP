int test_func(void) {
    int v0 = 76;
    int v1 = 67;
    int v2 = 64;
    int v3 = 91;
    int i;
    v2 = 92;
    v1 = v1 + v3;
    v3 = v3 & v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
