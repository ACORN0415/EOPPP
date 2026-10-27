int test_func(void) {
    int v0 = 33;
    int v1 = 71;
    int v2 = 54;
    int v3 = 99;
    int v4 = 79;
    int i;
    v2 = v2 - v1;
    v0 = v0 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
