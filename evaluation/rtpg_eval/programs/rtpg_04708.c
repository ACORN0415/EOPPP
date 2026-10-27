int test_func(void) {
    int v0 = 11;
    int v1 = 37;
    int v2 = 41;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 20; i++) {
        v1 = v1 + v1;
    }
    v0 = v0 * 5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
