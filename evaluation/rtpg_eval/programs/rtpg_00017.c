int test_func(void) {
    int v0 = 19;
    int v1 = 73;
    int v2 = 15;
    int v3 = 67;
    int v4 = 21;
    int v5 = 29;
    int i;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v0;
    }
    int *__p = &v5;
    *__p = *__p + 1;
    v2 = v2 | v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
