int test_func(void) {
    int v0 = 78;
    int v1 = 99;
    int v2 = 87;
    int v3 = 97;
    int v4 = 73;
    int v5 = 1;
    int i;
    v1 = 66;
    v2 = v2 * 8;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
