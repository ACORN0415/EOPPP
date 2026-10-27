int test_func(void) {
    int v0 = 64;
    int v1 = 6;
    int v2 = 44;
    int v3 = 81;
    int v4 = 42;
    int v5 = 50;
    int i;
    v2 = v2 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
