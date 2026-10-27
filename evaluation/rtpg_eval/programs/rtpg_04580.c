int __arr_4580[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 3;
    int v2 = 66;
    int v3 = 48;
    int v4 = 43;
    int v5 = 70;
    int i;
    for (i = 0; i < 10; i++) { __arr_4580[i] = v4 + i; }
    v5 = v5 - v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
