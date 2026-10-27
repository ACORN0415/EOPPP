int test_func(void) {
    int v0 = 24;
    int v1 = 8;
    int v2 = 59;
    int v3 = 59;
    int v4 = 54;
    int i;
    v3 = v3 - v1;
    if (v1 > v4) { v1 = v4; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
