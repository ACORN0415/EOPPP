int __arr_9949[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 52;
    int v2 = 69;
    int v3 = 67;
    int v4 = 61;
    int v5 = 6;
    int v6 = 20;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_9949[i] = v4 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
