int test_func(void) {
    int v0 = 13;
    int v1 = 100;
    int v2 = 36;
    int v3 = 77;
    int v4 = 28;
    int v5 = 13;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v4;
    }
    v2 = v2 - v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 ^ v5;
    return v0;
}
int main(void) { return test_func(); }
