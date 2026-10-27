int test_func(void) {
    int v0 = 26;
    int v1 = 82;
    int v2 = 21;
    int v3 = 73;
    int v4 = 52;
    int v5 = 86;
    int i;
    v0 = v0 + v4;
    if (v4 > v1) { v4 = v1; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
