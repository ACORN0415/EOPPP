int test_func(void) {
    int v0 = 68;
    int v1 = 42;
    int v2 = 82;
    int v3 = 24;
    int v4 = 56;
    int v5 = 38;
    int v6 = 72;
    int i;
    if (v2 > v4) { v2 = v4; }
    v0 = v0 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
