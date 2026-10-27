int __arr_7370[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 22;
    int v2 = 36;
    int v3 = 41;
    int i;
    for (i = 0; i < 10; i++) { __arr_7370[i] = v0 + i; }
    for (i = 0; i < 10; i++) {
        v1 = v1 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    v2 = v2 | v1;
    return v0;
}
int main(void) { return test_func(); }
