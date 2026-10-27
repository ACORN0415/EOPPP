int test_func(void) {
    int v0 = 87;
    int v1 = 68;
    int v2 = 55;
    int v3 = 73;
    int i;
    if (v3 > v3) { v3 = v3; }
    v1 = 95;
    v2 = v2 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
