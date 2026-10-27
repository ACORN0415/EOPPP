int __arr_7939[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 25;
    int v2 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_7939[i] = v2 + i; }
    v0 = v0 + v1;
    v2 = v2 * 3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
