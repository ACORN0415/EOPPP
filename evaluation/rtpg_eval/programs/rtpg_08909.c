int test_func(void) {
    int v0 = 47;
    int v1 = 22;
    int v2 = 98;
    int v3 = 99;
    int v4 = 88;
    int v5 = 5;
    int i;
    if (v5 > v4) { v5 = v4; }
    v2 = 76;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
