int test_func(void) {
    int v0 = 53;
    int v1 = 88;
    int v2 = 26;
    int v3 = 4;
    int v4 = 45;
    int v5 = 23;
    int v6 = 54;
    int v7 = 76;
    int i;
    v0 = 67;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
