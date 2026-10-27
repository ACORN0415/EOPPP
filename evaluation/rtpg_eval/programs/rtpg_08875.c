int test_func(void) {
    int v0 = 96;
    int v1 = 32;
    int v2 = 26;
    int v3 = 2;
    int v4 = 27;
    int i;
    v2 = v2 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
