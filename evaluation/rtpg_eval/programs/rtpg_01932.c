int test_func(void) {
    int v0 = 24;
    int v1 = 48;
    int v2 = 15;
    int v3 = 94;
    int v4 = 50;
    int i;
    v4 = 78;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
