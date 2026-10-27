int test_func(void) {
    int v0 = 44;
    int v1 = 38;
    int v2 = 92;
    int i;
    if (v0 > v2) { v0 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
