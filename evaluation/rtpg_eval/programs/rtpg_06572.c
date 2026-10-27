int test_func(void) {
    int v0 = 85;
    int v1 = 79;
    int v2 = 45;
    int v3 = 95;
    int v4 = 82;
    int v5 = 42;
    int v6 = 55;
    int v7 = 14;
    int i;
    v6 = v6 - v1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
