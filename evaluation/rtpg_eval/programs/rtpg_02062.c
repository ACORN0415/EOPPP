int test_func(void) {
    int v0 = 90;
    int v1 = 99;
    int v2 = 19;
    int v3 = 98;
    int v4 = 43;
    int i;
    v4 = 45;
    v4 = v4 * 6;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v3;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
