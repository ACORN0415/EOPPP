int test_func(void) {
    int v0 = 36;
    int v1 = 72;
    int v2 = 75;
    int v3 = 88;
    int v4 = 40;
    int v5 = 3;
    int v6 = 66;
    int v7 = 58;
    int i;
    v0 = v0 + v3;
    int *__p = &v2;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
