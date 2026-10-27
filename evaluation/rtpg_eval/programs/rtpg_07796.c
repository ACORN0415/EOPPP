int test_func(void) {
    int v0 = 93;
    int v1 = 65;
    int v2 = 46;
    int v3 = 71;
    int i;
    v0 = 81;
    v2 = v2 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
