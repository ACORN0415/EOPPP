int test_func(void) {
    int v0 = 57;
    int v1 = 70;
    int v2 = 39;
    int v3 = 59;
    int v4 = 24;
    int v5 = 89;
    int i;
    v5 = v5 * 9;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
