int test_func(void) {
    int v0 = 87;
    int v1 = 89;
    int v2 = 45;
    int v3 = 5;
    int v4 = 35;
    int v5 = 71;
    int i;
    v2 = v2 * 4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
