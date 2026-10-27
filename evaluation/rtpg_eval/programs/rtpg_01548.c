int test_func(void) {
    int v0 = 14;
    int v1 = 48;
    int v2 = 22;
    int v3 = 39;
    int v4 = 59;
    int i;
    if (v3 > v2) { v3 = v2; }
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
