int __arr_3116[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 28;
    int v2 = 14;
    int v3 = 42;
    int i;
    for (i = 0; i < 10; i++) { __arr_3116[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
