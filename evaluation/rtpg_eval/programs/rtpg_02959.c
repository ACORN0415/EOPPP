int test_func(void) {
    int v0 = 30;
    int v1 = 19;
    int v2 = 87;
    int v3 = 38;
    int v4 = 59;
    int v5 = 74;
    int i;
    v5 = v5 * 5;
    v2 = v2 + v5;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v4;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
