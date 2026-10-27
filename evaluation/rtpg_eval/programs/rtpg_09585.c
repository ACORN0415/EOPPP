int test_func(void) {
    int v0 = 75;
    int v1 = 17;
    int v2 = 98;
    int v3 = 30;
    int v4 = 61;
    int i;
    v0 = 30;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v2;
    }
    v3 = v3 + v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
