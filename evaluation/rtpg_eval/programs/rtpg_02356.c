int __arr_2356[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 27;
    int v2 = 3;
    int i;
    v2 = v2 * 3;
    for (i = 0; i < 10; i++) { __arr_2356[i] = v0 + i; }
    v2 = 15;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
