int test_func(void) {
    int v0 = 17;
    int v1 = 44;
    int v2 = 47;
    int v3 = 40;
    int v4 = 81;
    int i;
    v3 = v3 * 10;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v3 = v3 & v4;
    return v0;
}
int main(void) { return test_func(); }
