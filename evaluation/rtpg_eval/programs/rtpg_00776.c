int test_func(void) {
    int v0 = 76;
    int v1 = 33;
    int v2 = 70;
    int v3 = 79;
    int v4 = 72;
    int v5 = 30;
    int v6 = 83;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
