int __arr_5854[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 72;
    int v2 = 87;
    int v3 = 48;
    int v4 = 28;
    int i;
    for (i = 0; i < 10; i++) { __arr_5854[i] = v3 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
