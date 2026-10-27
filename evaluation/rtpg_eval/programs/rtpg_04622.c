int test_func(void) {
    int v0 = 44;
    int v1 = 5;
    int v2 = 67;
    int v3 = 1;
    int v4 = 83;
    int v5 = 14;
    int i;
    v5 = v5 + v3;
    v1 = v1 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
