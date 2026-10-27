int test_func(void) {
    int v0 = 57;
    int v1 = 62;
    int v2 = 2;
    int v3 = 87;
    int v4 = 26;
    int v5 = 27;
    int v6 = 72;
    int v7 = 26;
    int i;
    v6 = 99;
    if (v2 > v1) { v2 = v1; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
