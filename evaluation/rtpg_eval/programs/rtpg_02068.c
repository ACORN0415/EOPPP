int test_func(void) {
    int v0 = 92;
    int v1 = 51;
    int v2 = 63;
    int v3 = 30;
    int v4 = 85;
    int v5 = 23;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
