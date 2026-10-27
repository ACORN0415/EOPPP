int test_func(void) {
    int v0 = 30;
    int v1 = 63;
    int v2 = 0;
    int v3 = 9;
    int v4 = 13;
    int v5 = 90;
    int v6 = 53;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    if (v0 > v3) { v0 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
