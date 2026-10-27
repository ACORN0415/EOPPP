int test_func(void) {
    int v0 = 41;
    int v1 = 59;
    int v2 = 89;
    int v3 = 31;
    int v4 = 77;
    int i;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
