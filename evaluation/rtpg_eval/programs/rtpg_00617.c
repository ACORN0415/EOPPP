int test_func(void) {
    int v0 = 68;
    int v1 = 97;
    int v2 = 38;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 * 9;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
