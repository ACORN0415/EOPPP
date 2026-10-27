int test_func(void) {
    int v0 = 56;
    int v1 = 77;
    int v2 = 84;
    int v3 = 40;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v3;
    }
    v1 = v1 * 7;
    v1 = 92;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
