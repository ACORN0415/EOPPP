int test_func(void) {
    int v0 = 39;
    int v1 = 23;
    int v2 = 31;
    int v3 = 84;
    int v4 = 91;
    int v5 = 63;
    int v6 = 63;
    int i;
    v0 = 26;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
