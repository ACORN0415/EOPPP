int __arr_635[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 44;
    int v2 = 77;
    int v3 = 6;
    int v4 = 79;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_635[i] = v4 + i; }
    if (v1 > v0) { v1 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
