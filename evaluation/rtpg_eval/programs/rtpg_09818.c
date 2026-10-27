int test_func(void) {
    int v0 = 29;
    int v1 = 19;
    int v2 = 56;
    int v3 = 65;
    int v4 = 29;
    int v5 = 81;
    int v6 = 68;
    int i;
    v4 = 44;
    if (v1 > v4) { v1 = v4; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
