int test_func(void) {
    int v0 = 21;
    int v1 = 64;
    int v2 = 71;
    int v3 = 23;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
