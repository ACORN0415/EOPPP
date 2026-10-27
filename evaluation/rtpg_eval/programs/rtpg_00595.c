int test_func(void) {
    int v0 = 69;
    int v1 = 34;
    int v2 = 70;
    int v3 = 20;
    int v4 = 94;
    int i;
    v1 = v1 * 8;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
