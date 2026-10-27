int test_func(void) {
    int v0 = 4;
    int v1 = 89;
    int v2 = 74;
    int v3 = 100;
    int v4 = 69;
    int v5 = 56;
    int v6 = 10;
    int i;
    v1 = v1 * 2;
    v3 = 87;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
