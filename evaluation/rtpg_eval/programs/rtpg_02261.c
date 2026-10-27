int __arr_2261[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 64;
    int v2 = 27;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 10; i++) { __arr_2261[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
