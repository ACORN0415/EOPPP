int test_func(void) {
    int v0 = 25;
    int v1 = 2;
    int v2 = 40;
    int v3 = 14;
    int v4 = 97;
    int v5 = 81;
    int v6 = 40;
    int v7 = 35;
    int i;
    v2 = v2 * 2;
    v5 = v5 - v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
