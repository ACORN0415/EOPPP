int test_func(void) {
    int v0 = 34;
    int v1 = 58;
    int v2 = 91;
    int v3 = 100;
    int v4 = 99;
    int v5 = 3;
    int v6 = 2;
    int i;
    if (v4 > v4) { v4 = v4; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
