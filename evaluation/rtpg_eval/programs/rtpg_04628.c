int test_func(void) {
    int v0 = 49;
    int v1 = 28;
    int v2 = 42;
    int v3 = 18;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v1;
    }
    if (v2 > v0) { v2 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
