int test_func(void) {
    int v0 = 98;
    int v1 = 70;
    int v2 = 59;
    int i;
    v0 = v0 + v2;
    v0 = 40;
    v2 = v2 * 7;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
