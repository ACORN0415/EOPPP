int test_func(void) {
    int v0 = 49;
    int v1 = 44;
    int v2 = 66;
    int i;
    v2 = v2 * 9;
    v1 = 29;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
