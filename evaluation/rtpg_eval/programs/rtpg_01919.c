int test_func(void) {
    int v0 = 26;
    int v1 = 66;
    int v2 = 0;
    int v3 = 47;
    int v4 = 37;
    int v5 = 97;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v1;
    }
    v4 = v4 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
