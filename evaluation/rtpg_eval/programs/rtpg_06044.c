int test_func(void) {
    int v0 = 0;
    int v1 = 69;
    int v2 = 90;
    int v3 = 3;
    int v4 = 76;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
