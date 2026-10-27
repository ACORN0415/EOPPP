int test_func(void) {
    int v0 = 51;
    int v1 = 17;
    int v2 = 81;
    int v3 = 76;
    int v4 = 95;
    int v5 = 48;
    int i;
    v0 = v0 + v2;
    if (v0 > v1) { v0 = v1; }
    v3 = 28;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
