int test_func(void) {
    int v0 = 2;
    int v1 = 63;
    int v2 = 22;
    int v3 = 93;
    int i;
    v2 = v2 * 7;
    v2 = v2 + v3;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
