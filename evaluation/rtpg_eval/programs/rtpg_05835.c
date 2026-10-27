int test_func(void) {
    int v0 = 19;
    int v1 = 74;
    int v2 = 87;
    int v3 = 24;
    int v4 = 27;
    int v5 = 48;
    int v6 = 59;
    int i;
    v0 = v0 - v1;
    v2 = 47;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
