int test_func(void) {
    int v0 = 44;
    int v1 = 83;
    int v2 = 1;
    int v3 = 99;
    int v4 = 18;
    int v5 = 62;
    int i;
    v4 = 80;
    if (v0 > v4) { v0 = v4; }
    v3 = v3 + v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
