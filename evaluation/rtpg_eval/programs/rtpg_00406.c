int test_func(void) {
    int v0 = 17;
    int v1 = 61;
    int v2 = 77;
    int i;
    v1 = v1 + v2;
    v0 = 69;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
