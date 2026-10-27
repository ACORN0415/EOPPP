int test_func(void) {
    int v0 = 2;
    int v1 = 35;
    int v2 = 55;
    int v3 = 41;
    int v4 = 35;
    int v5 = 87;
    int i;
    v4 = v4 - v5;
    v1 = v1 * 9;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
