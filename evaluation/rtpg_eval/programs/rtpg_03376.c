int __arr_3376[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 12;
    int v2 = 89;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 10; i++) { __arr_3376[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
