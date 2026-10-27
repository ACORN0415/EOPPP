int test_func(void) {
    int v0 = 23;
    int v1 = 55;
    int v2 = 36;
    int v3 = 3;
    int v4 = 32;
    int v5 = 52;
    int v6 = 6;
    int v7 = 87;
    int i;
    v7 = v7 + v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
