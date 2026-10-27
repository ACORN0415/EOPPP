int test_func(void) {
    int v0 = 92;
    int v1 = 63;
    int v2 = 83;
    int v3 = 19;
    int v4 = 16;
    int v5 = 86;
    int v6 = 59;
    int i;
    v4 = v4 - v2;
    if (v1 > v3) { v1 = v3; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v4;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
