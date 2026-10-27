int test_func(void) {
    int v0 = 11;
    int v1 = 39;
    int v2 = 0;
    int v3 = 91;
    int v4 = 31;
    int v5 = 58;
    int v6 = 94;
    int v7 = 94;
    int i;
    v3 = v3 - v5;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
