int test_func(void) {
    int v0 = 50;
    int v1 = 97;
    int v2 = 50;
    int v3 = 25;
    int v4 = 81;
    int v5 = 12;
    int i;
    v4 = v4 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v0 = v0 & v3;
    return v0;
}
int main(void) { return test_func(); }
