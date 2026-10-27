int test_func(void) {
    int v0 = 92;
    int v1 = 78;
    int v2 = 95;
    int i;
    v2 = v2 * 9;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v1;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
