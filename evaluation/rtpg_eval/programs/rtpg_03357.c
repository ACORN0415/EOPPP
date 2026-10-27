int test_func(void) {
    int v0 = 68;
    int v1 = 25;
    int v2 = 0;
    int v3 = 36;
    int v4 = 13;
    int v5 = 45;
    int i;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v1;
    }
    v3 = v3 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
