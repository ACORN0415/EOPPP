int test_func(void) {
    int v0 = 74;
    int v1 = 31;
    int v2 = 56;
    int v3 = 32;
    int v4 = 57;
    int i;
    v3 = v3 * 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
