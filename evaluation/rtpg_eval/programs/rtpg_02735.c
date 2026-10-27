int test_func(void) {
    int v0 = 74;
    int v1 = 42;
    int v2 = 2;
    int v3 = 14;
    int v4 = 27;
    int v5 = 28;
    int v6 = 53;
    int v7 = 37;
    int i;
    v2 = v2 * 7;
    int *__p = &v3;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
