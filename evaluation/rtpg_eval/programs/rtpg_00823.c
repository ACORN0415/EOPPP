int test_func(void) {
    int v0 = 68;
    int v1 = 40;
    int v2 = 82;
    int v3 = 64;
    int v4 = 77;
    int v5 = 19;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v1;
    }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v4 = v4 & v3;
    return v0;
}
int main(void) { return test_func(); }
