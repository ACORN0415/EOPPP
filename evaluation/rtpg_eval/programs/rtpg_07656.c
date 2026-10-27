int test_func(void) {
    int v0 = 89;
    int v1 = 58;
    int v2 = 69;
    int v3 = 59;
    int v4 = 2;
    int i;
    for (i = 0; i < 13; i++) {
        v4 = v4 + v0;
    }
    v4 = v4 * 5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
