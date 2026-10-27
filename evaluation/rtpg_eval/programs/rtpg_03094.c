int test_func(void) {
    int v0 = 1;
    int v1 = 34;
    int v2 = 89;
    int v3 = 66;
    int v4 = 1;
    int v5 = 9;
    int v6 = 62;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 11; i++) {
        v6 = v6 + v4;
    }
    v1 = v1 - v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
