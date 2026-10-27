int test_func(void) {
    int v0 = 45;
    int v1 = 19;
    int v2 = 48;
    int v3 = 6;
    int v4 = 26;
    int v5 = 48;
    int v6 = 17;
    int i;
    v1 = 39;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
