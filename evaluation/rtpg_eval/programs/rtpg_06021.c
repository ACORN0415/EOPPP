int test_func(void) {
    int v0 = 44;
    int v1 = 11;
    int v2 = 58;
    int v3 = 99;
    int v4 = 19;
    int v5 = 54;
    int i;
    v5 = v5 - v2;
    v2 = 75;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v0;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
