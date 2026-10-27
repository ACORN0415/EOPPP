int test_func(void) {
    int v0 = 63;
    int v1 = 20;
    int v2 = 47;
    int v3 = 74;
    int v4 = 2;
    int v5 = 96;
    int v6 = 63;
    int v7 = 88;
    int i;
    v2 = v2 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v7 = v7 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
