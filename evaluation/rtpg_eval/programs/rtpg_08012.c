int test_func(void) {
    int v0 = 97;
    int v1 = 17;
    int v2 = 45;
    int v3 = 66;
    int v4 = 14;
    int v5 = 33;
    int v6 = 17;
    int i;
    v2 = v2 - v1;
    v4 = v4 * 6;
    v4 = 86;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
