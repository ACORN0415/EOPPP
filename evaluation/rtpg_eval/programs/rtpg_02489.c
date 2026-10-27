int test_func(void) {
    int v0 = 75;
    int v1 = 93;
    int v2 = 100;
    int v3 = 6;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 + v1;
    v0 = v0 - v2;
    v2 = v2 & v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
