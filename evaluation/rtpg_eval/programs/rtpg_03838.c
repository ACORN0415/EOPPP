int test_func(void) {
    int v0 = 2;
    int v1 = 57;
    int v2 = 13;
    int v3 = 51;
    int i;
    v1 = v1 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
