int test_func(void) {
    int v0 = 97;
    int v1 = 62;
    int v2 = 75;
    int v3 = 85;
    int v4 = 39;
    int v5 = 38;
    int v6 = 15;
    int v7 = 19;
    int i;
    v1 = v1 + v5;
    v6 = v6 * 4;
    v3 = 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    int *__p = &v6;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
