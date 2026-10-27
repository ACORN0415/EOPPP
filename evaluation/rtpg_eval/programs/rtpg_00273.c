int test_func(void) {
    int v0 = 19;
    int v1 = 22;
    int v2 = 86;
    int v3 = 44;
    int i;
    v3 = 23;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
