int test_func(void) {
    int v0 = 46;
    int v1 = 54;
    int v2 = 35;
    int v3 = 49;
    int i;
    if (v3 > v0) { v3 = v0; }
    v2 = v2 + v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
