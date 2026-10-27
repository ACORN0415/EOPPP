int __arr_9566[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 50;
    int v2 = 56;
    int v3 = 36;
    int v4 = 91;
    int v5 = 46;
    int v6 = 84;
    int v7 = 40;
    int i;
    for (i = 0; i < 10; i++) { __arr_9566[i] = v4 + i; }
    for (i = 0; i < 17; i++) {
        v4 = v4 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
