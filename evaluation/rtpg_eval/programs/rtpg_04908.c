int test_func(void) {
    int v0 = 18;
    int v1 = 12;
    int v2 = 47;
    int v3 = 28;
    int v4 = 59;
    int v5 = 7;
    int v6 = 0;
    int v7 = 43;
    int i;
    v4 = v4 - v7;
    v6 = v6 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    int *__p = &v4;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
