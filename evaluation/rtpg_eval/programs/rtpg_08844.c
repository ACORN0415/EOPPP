int test_func(void) {
    int v0 = 99;
    int v1 = 32;
    int v2 = 82;
    int v3 = 9;
    int v4 = 17;
    int v5 = 24;
    int i;
    v3 = 27;
    v3 = v3 * 6;
    v1 = v1 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
