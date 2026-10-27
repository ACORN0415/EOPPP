int test_func(void) {
    int v0 = 100;
    int v1 = 87;
    int v2 = 20;
    int v3 = 86;
    int v4 = 63;
    int v5 = 17;
    int i;
    v5 = v5 + v5;
    if (v5 > v1) { v5 = v1; }
    v1 = v1 * 8;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
