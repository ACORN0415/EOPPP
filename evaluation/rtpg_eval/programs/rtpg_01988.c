int test_func(void) {
    int v0 = 99;
    int v1 = 60;
    int v2 = 44;
    int v3 = 43;
    int v4 = 65;
    int i;
    v3 = v3 * 10;
    v3 = v3 + v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
