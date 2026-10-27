int test_func(void) {
    int v0 = 45;
    int v1 = 6;
    int v2 = 40;
    int v3 = 19;
    int v4 = 66;
    int v5 = 92;
    int i;
    v4 = v4 - v0;
    int *__p = &v2;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
