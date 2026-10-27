int __arr_8273[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 22;
    int v2 = 82;
    int v3 = 45;
    int v4 = 14;
    int v5 = 74;
    int i;
    if (v5 > v0) { v5 = v0; }
    for (i = 0; i < 10; i++) { __arr_8273[i] = v4 + i; }
    v0 = v0 - v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
