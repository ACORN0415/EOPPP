int test_func(void) {
    int v0 = 94;
    int v1 = 0;
    int v2 = 99;
    int i;
    v2 = 63;
    v1 = v1 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
