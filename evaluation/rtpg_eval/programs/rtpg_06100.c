int test_func(void) {
    int v0 = 56;
    int v1 = 93;
    int v2 = 48;
    int v3 = 47;
    int v4 = 99;
    int v5 = 66;
    int v6 = 64;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v5;
    }
    v6 = 23;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
