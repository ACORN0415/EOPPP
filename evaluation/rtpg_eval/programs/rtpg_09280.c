int test_func(void) {
    int v0 = 3;
    int v1 = 71;
    int v2 = 31;
    int v3 = 29;
    int v4 = 0;
    int v5 = 64;
    int v6 = 39;
    int v7 = 65;
    int i;
    if (v0 > v2) { v0 = v2; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
