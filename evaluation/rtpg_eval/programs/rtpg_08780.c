int __arr_8780[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 31;
    int v2 = 8;
    int v3 = 45;
    int v4 = 11;
    int v5 = 57;
    int v6 = 43;
    int v7 = 54;
    int i;
    v5 = v5 + v3;
    for (i = 0; i < 10; i++) { __arr_8780[i] = v0 + i; }
    if (v4 > v3) { v4 = v3; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__p = &v3;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
