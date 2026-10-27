int __arr_9002[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 96;
    int v2 = 94;
    int v3 = 19;
    int v4 = 79;
    int v5 = 97;
    int i;
    v0 = 88;
    for (i = 0; i < 17; i++) {
        v4 = v4 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_9002[i] = v3 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
