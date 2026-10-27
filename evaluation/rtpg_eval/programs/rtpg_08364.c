int test_func(void) {
    int v0 = 72;
    int v1 = 3;
    int v2 = 100;
    int v3 = 49;
    int v4 = 90;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v3;
    }
    v0 = v0 - v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
