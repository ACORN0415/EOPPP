int test_func(void) {
    int v0 = 49;
    int v1 = 73;
    int v2 = 91;
    int v3 = 64;
    int i;
    v3 = 12;
    for (i = 0; i < 9; i++) {
        v1 = v1 + v2;
    }
    v2 = v2 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
