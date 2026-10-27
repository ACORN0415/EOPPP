int test_func(void) {
    int v0 = 17;
    int v1 = 14;
    int v2 = 15;
    int v3 = 74;
    int v4 = 20;
    int i;
    v1 = v1 - v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
