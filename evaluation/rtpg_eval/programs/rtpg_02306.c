int test_func(void) {
    int v0 = 85;
    int v1 = 23;
    int v2 = 79;
    int v3 = 72;
    int v4 = 86;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    v4 = v4 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
