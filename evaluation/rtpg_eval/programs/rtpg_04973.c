int test_func(void) {
    int v0 = 22;
    int v1 = 96;
    int v2 = 12;
    int v3 = 63;
    int v4 = 1;
    int v5 = 70;
    int v6 = 32;
    int i;
    if (v3 > v5) { v3 = v5; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
