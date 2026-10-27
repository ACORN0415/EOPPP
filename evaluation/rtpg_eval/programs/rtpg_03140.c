int test_func(void) {
    int v0 = 60;
    int v1 = 45;
    int v2 = 12;
    int v3 = 98;
    int v4 = 13;
    int v5 = 38;
    int v6 = 31;
    int v7 = 94;
    int i;
    if (v0 > v5) { v0 = v5; }
    v7 = v7 * 7;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
