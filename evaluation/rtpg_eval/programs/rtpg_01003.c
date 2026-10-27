int test_func(void) {
    int v0 = 90;
    int v1 = 19;
    int v2 = 89;
    int v3 = 6;
    int v4 = 29;
    int v5 = 75;
    int i;
    v2 = v2 * 7;
    v0 = v0 - v3;
    if (v2 > v1) { v2 = v1; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    v1 = v1 & v5;
    return v0;
}
int main(void) { return test_func(); }
