int test_func(void) {
    int v0 = 27;
    int v1 = 96;
    int v2 = 14;
    int v3 = 66;
    int v4 = 25;
    int v5 = 53;
    int v6 = 25;
    int i;
    v5 = v5 - v6;
    v1 = v1 * 2;
    v5 = 86;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
