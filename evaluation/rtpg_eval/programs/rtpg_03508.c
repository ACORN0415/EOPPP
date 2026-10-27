int test_func(void) {
    int v0 = 58;
    int v1 = 54;
    int v2 = 61;
    int v3 = 86;
    int v4 = 38;
    int v5 = 89;
    int v6 = 82;
    int i;
    if (v1 > v3) { v1 = v3; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
