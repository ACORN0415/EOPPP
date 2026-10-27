int test_func(void) {
    int v0 = 59;
    int v1 = 78;
    int v2 = 6;
    int v3 = 71;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v2;
    }
    v0 = 81;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
