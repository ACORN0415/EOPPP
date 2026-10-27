int test_func(void) {
    int v0 = 9;
    int v1 = 63;
    int v2 = 8;
    int v3 = 29;
    int v4 = 6;
    int v5 = 27;
    int v6 = 57;
    int i;
    if (v5 > v4) { v5 = v4; }
    for (i = 0; i < 9; i++) {
        v6 = v6 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
