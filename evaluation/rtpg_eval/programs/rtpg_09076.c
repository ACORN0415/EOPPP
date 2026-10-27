int test_func(void) {
    int v0 = 27;
    int v1 = 18;
    int v2 = 57;
    int v3 = 78;
    int v4 = 4;
    int v5 = 49;
    int v6 = 71;
    int i;
    if (v0 > v5) { v0 = v5; }
    v0 = v0 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
