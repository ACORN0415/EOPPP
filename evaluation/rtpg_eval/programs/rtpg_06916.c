int test_func(void) {
    int v0 = 21;
    int v1 = 70;
    int v2 = 53;
    int v3 = 39;
    int v4 = 35;
    int v5 = 24;
    int v6 = 6;
    int i;
    if (v5 > v6) { v5 = v6; }
    v0 = v0 * 8;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
