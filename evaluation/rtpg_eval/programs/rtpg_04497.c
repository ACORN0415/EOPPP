int test_func(void) {
    int v0 = 22;
    int v1 = 96;
    int v2 = 48;
    int v3 = 41;
    int v4 = 48;
    int v5 = 35;
    int v6 = 61;
    int v7 = 58;
    int i;
    v5 = 44;
    for (i = 0; i < 15; i++) {
        v7 = v7 + v4;
    }
    v2 = v2 + v4;
    v2 = v2 / (v5 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
