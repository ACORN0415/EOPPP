int test_func(void) {
    int v0 = 73;
    int v1 = 45;
    int v2 = 69;
    int v3 = 13;
    int v4 = 65;
    int v5 = 100;
    int v6 = 68;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
