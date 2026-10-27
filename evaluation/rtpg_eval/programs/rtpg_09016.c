int test_func(void) {
    int v0 = 19;
    int v1 = 29;
    int v2 = 14;
    int v3 = 63;
    int v4 = 39;
    int v5 = 21;
    int v6 = 55;
    int v7 = 58;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    int *__p = &v1;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
