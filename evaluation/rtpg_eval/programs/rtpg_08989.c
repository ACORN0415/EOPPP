int test_func(void) {
    int v0 = 42;
    int v1 = 100;
    int v2 = 63;
    int v3 = 89;
    int i;
    v0 = v0 * 5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
