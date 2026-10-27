int test_func(void) {
    int v0 = 54;
    int v1 = 36;
    int v2 = 40;
    int v3 = 33;
    int v4 = 32;
    int v5 = 81;
    int i;
    v2 = v2 * 5;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
