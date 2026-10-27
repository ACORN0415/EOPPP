int test_func(void) {
    int v0 = 64;
    int v1 = 53;
    int v2 = 96;
    int v3 = 56;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v3;
    }
    v1 = v1 - v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v0 = v0 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
