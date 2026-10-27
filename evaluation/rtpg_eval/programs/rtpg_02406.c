int test_func(void) {
    int v0 = 98;
    int v1 = 83;
    int v2 = 45;
    int v3 = 97;
    int v4 = 36;
    int v5 = 43;
    int v6 = 53;
    int v7 = 17;
    int i;
    v2 = v2 + v1;
    v2 = v2 * 4;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
