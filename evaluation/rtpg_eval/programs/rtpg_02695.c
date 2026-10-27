int __arr_2695[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 0;
    int v2 = 77;
    int v3 = 99;
    int v4 = 4;
    int v5 = 28;
    int v6 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_2695[i] = v2 + i; }
    v0 = 64;
    int *__p = &v3;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
