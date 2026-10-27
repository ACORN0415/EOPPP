int test_func(void) {
    int v0 = 42;
    int v1 = 42;
    int v2 = 54;
    int v3 = 22;
    int v4 = 48;
    int v5 = 20;
    int v6 = 66;
    int v7 = 89;
    int i;
    v2 = v2 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
