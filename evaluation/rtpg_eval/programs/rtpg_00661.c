int test_func(void) {
    int v0 = 83;
    int v1 = 46;
    int v2 = 37;
    int v3 = 2;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v0;
    }
    if (v1 > v2) { v1 = v2; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
