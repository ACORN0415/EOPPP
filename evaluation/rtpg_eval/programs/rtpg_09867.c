int test_func(void) {
    int v0 = 69;
    int v1 = 93;
    int v2 = 27;
    int v3 = 26;
    int v4 = 64;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v4;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
