int test_func(void) {
    int v0 = 61;
    int v1 = 92;
    int v2 = 39;
    int v3 = 74;
    int v4 = 21;
    int v5 = 97;
    int v6 = 58;
    int i;
    v4 = v4 - v1;
    v1 = 45;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
