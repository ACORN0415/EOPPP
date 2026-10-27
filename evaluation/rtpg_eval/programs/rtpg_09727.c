int test_func(void) {
    int v0 = 31;
    int v1 = 2;
    int v2 = 1;
    int v3 = 4;
    int i;
    v2 = 72;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
