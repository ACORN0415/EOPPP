int test_func(void) {
    int v0 = 46;
    int v1 = 45;
    int v2 = 96;
    int v3 = 31;
    int v4 = 40;
    int v5 = 5;
    int v6 = 10;
    int v7 = 90;
    int i;
    v5 = v5 * 7;
    v5 = v5 + v6;
    int *__p = &v7;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
