int test_func(void) {
    int v0 = 26;
    int v1 = 72;
    int v2 = 55;
    int v3 = 13;
    int v4 = 88;
    int v5 = 6;
    int v6 = 20;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v5;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
