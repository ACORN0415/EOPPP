int test_func(void) {
    int v0 = 5;
    int v1 = 82;
    int v2 = 36;
    int v3 = 76;
    int v4 = 82;
    int v5 = 97;
    int v6 = 17;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v2;
    }
    if (v0 > v5) { v0 = v5; }
    v4 = v4 + v3;
    int *__p = &v3;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
