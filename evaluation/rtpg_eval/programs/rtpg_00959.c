int test_func(void) {
    int v0 = 18;
    int v1 = 39;
    int v2 = 5;
    int v3 = 27;
    int v4 = 75;
    int v5 = 23;
    int i;
    v4 = v4 - v1;
    v5 = v5 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
