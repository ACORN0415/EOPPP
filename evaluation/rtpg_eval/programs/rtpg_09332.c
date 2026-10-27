int test_func(void) {
    int v0 = 88;
    int v1 = 86;
    int v2 = 28;
    int v3 = 84;
    int v4 = 46;
    int i;
    v2 = 46;
    v2 = v2 * 9;
    v0 = v0 + v1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
