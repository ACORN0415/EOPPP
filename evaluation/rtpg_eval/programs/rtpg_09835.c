int test_func(void) {
    int v0 = 78;
    int v1 = 2;
    int v2 = 90;
    int v3 = 18;
    int v4 = 13;
    int v5 = 58;
    int i;
    v3 = v3 * 10;
    v0 = v0 + v0;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v4;
    }
    v5 = v5 ^ v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
