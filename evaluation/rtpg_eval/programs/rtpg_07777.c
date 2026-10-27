int test_func(void) {
    int v0 = 50;
    int v1 = 88;
    int v2 = 69;
    int v3 = 30;
    int v4 = 13;
    int i;
    v4 = v4 - v1;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v0;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
