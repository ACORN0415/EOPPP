int test_func(void) {
    int v0 = 5;
    int v1 = 0;
    int v2 = 43;
    int v3 = 65;
    int v4 = 92;
    int v5 = 47;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v3;
    }
    v3 = v3 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
