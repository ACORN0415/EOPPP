int test_func(void) {
    int v0 = 23;
    int v1 = 86;
    int v2 = 85;
    int i;
    v0 = v0 - v1;
    v2 = v2 * 6;
    v1 = v1 % (v2 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
