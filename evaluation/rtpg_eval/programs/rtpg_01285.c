int test_func(void) {
    int v0 = 59;
    int v1 = 3;
    int v2 = 25;
    int v3 = 87;
    int v4 = 1;
    int v5 = 37;
    int v6 = 11;
    int i;
    if (v1 > v6) { v1 = v6; }
    v4 = v4 * 6;
    v2 = v2 | v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
