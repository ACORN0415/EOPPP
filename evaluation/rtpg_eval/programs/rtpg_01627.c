int test_func(void) {
    int v0 = 85;
    int v1 = 33;
    int v2 = 1;
    int i;
    v2 = v2 - v1;
    v2 = v2 + v0;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
