int test_func(void) {
    int v0 = 13;
    int v1 = 16;
    int v2 = 70;
    int v3 = 64;
    int v4 = 31;
    int v5 = 86;
    int v6 = 88;
    int i;
    v3 = v3 - v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
