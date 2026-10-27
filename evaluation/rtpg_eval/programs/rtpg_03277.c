int test_func(void) {
    int v0 = 52;
    int v1 = 92;
    int v2 = 4;
    int v3 = 7;
    int v4 = 2;
    int v5 = 76;
    int i;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v1;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
