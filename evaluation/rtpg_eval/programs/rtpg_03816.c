int __arr_3816[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 53;
    int v2 = 37;
    int v3 = 26;
    int i;
    for (i = 0; i < 10; i++) { __arr_3816[i] = v1 + i; }
    v2 = v2 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
