int test_func(void) {
    int v0 = 6;
    int v1 = 20;
    int v2 = 41;
    int v3 = 28;
    int i;
    v2 = v2 * 9;
    if (v0 > v0) { v0 = v0; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
