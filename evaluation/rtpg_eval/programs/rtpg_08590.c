int test_func(void) {
    int v0 = 25;
    int v1 = 76;
    int v2 = 11;
    int v3 = 47;
    int i;
    v3 = v3 * 3;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v2;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
