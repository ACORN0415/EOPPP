int test_func(void) {
    int v0 = 70;
    int v1 = 86;
    int v2 = 74;
    int v3 = 51;
    int i;
    v1 = v1 + v0;
    v0 = v0 - v3;
    v1 = 78;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
