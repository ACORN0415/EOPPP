int test_func(void) {
    int v0 = 72;
    int v1 = 96;
    int v2 = 73;
    int v3 = 64;
    int i;
    v3 = v3 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 & v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
