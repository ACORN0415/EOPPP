int test_func(void) {
    int v0 = 15;
    int v1 = 35;
    int v2 = 46;
    int v3 = 70;
    int v4 = 54;
    int v5 = 45;
    int i;
    if (v3 > v4) { v3 = v4; }
    v3 = 74;
    v1 = v1 + v5;
    v2 = v2 & v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
