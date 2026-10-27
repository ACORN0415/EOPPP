int test_func(void) {
    int v0 = 88;
    int v1 = 24;
    int v2 = 42;
    int v3 = 52;
    int i;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v0;
    }
    v2 = v2 * 8;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
