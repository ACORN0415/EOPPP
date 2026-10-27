int test_func(void) {
    int v0 = 3;
    int v1 = 85;
    int v2 = 53;
    int v3 = 12;
    int v4 = 46;
    int v5 = 74;
    int i;
    v0 = v0 + v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v5 = v5 ^ v4;
    return v0;
}
int main(void) { return test_func(); }
