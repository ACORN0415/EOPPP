int test_func(void) {
    int v0 = 77;
    int v1 = 60;
    int v2 = 35;
    int v3 = 71;
    int v4 = 88;
    int v5 = 18;
    int i;
    v1 = v1 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
