int test_func(void) {
    int v0 = 87;
    int v1 = 19;
    int v2 = 36;
    int v3 = 98;
    int v4 = 48;
    int i;
    v2 = 29;
    v1 = v1 + v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v0 = v0 ^ v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
