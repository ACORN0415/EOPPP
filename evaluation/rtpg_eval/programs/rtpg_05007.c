int test_func(void) {
    int v0 = 16;
    int v1 = 45;
    int v2 = 51;
    int v3 = 28;
    int v4 = 24;
    int v5 = 12;
    int v6 = 19;
    int v7 = 87;
    int i;
    v6 = v6 - v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
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
