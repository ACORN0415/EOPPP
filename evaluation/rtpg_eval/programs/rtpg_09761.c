int test_func(void) {
    int v0 = 1;
    int v1 = 66;
    int v2 = 87;
    int v3 = 6;
    int v4 = 86;
    int v5 = 52;
    int v6 = 22;
    int i;
    v0 = v0 + v4;
    v4 = v4 - v5;
    v4 = v4 & v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
