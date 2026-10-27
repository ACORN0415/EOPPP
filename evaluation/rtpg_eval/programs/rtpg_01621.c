int test_func(void) {
    int v0 = 66;
    int v1 = 53;
    int v2 = 75;
    int v3 = 30;
    int v4 = 13;
    int v5 = 86;
    int v6 = 58;
    int i;
    v4 = 3;
    if (v6 > v5) { v6 = v5; }
    for (i = 0; i < 11; i++) {
        v5 = v5 + v3;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
