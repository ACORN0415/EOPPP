int test_func(void) {
    int v0 = 53;
    int v1 = 4;
    int v2 = 76;
    int v3 = 55;
    int v4 = 46;
    int v5 = 12;
    int v6 = 3;
    int v7 = 39;
    int i;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
