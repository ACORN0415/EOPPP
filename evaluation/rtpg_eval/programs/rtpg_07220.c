int test_func(void) {
    int v0 = 93;
    int v1 = 43;
    int v2 = 35;
    int v3 = 96;
    int i;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
