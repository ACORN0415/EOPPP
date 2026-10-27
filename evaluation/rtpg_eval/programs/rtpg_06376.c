int test_func(void) {
    int v0 = 70;
    int v1 = 75;
    int v2 = 20;
    int v3 = 87;
    int v4 = 86;
    int v5 = 96;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
