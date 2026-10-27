int test_func(void) {
    int v0 = 58;
    int v1 = 98;
    int v2 = 88;
    int v3 = 69;
    int v4 = 60;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
