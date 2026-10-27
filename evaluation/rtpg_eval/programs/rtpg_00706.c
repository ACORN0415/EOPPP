int test_func(void) {
    int v0 = 88;
    int v1 = 49;
    int v2 = 23;
    int v3 = 44;
    int i;
    if (v2 > v0) { v2 = v0; }
    v3 = v3 - v2;
    v2 = v2 * 2;
    v0 = v0 ^ v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
