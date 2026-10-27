int test_func(void) {
    int v0 = 15;
    int v1 = 32;
    int v2 = 18;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v2;
    }
    v1 = 62;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
