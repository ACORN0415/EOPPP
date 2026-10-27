int test_func(void) {
    int v0 = 45;
    int v1 = 34;
    int v2 = 1;
    int v3 = 43;
    int v4 = 38;
    int v5 = 27;
    int v6 = 20;
    int i;
    for (i = 0; i < 7; i++) {
        v6 = v6 + v0;
    }
    v0 = v0 - v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
