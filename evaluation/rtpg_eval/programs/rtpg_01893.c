int __arr_1893[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 77;
    int v2 = 46;
    int v3 = 22;
    int i;
    for (i = 0; i < 10; i++) { __arr_1893[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
