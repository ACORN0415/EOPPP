int __arr_9785[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 3;
    int v2 = 96;
    int v3 = 65;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 10; i++) { __arr_9785[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
