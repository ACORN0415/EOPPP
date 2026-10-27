int test_func(void) {
    int v0 = 44;
    int v1 = 99;
    int v2 = 92;
    int v3 = 55;
    int v4 = 65;
    int i;
    v1 = v1 + v1;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
