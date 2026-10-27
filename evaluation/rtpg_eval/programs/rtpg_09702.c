int test_func(void) {
    int v0 = 15;
    int v1 = 41;
    int v2 = 18;
    int v3 = 96;
    int v4 = 5;
    int v5 = 68;
    int i;
    v3 = v3 + v2;
    v2 = v2 - v5;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
