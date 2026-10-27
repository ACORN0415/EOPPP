int test_func(void) {
    int v0 = 59;
    int v1 = 36;
    int v2 = 2;
    int v3 = 55;
    int i;
    v3 = 63;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
