int test_func(void) {
    int v0 = 82;
    int v1 = 71;
    int v2 = 25;
    int v3 = 47;
    int v4 = 88;
    int i;
    v3 = v3 * 9;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
