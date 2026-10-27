int test_func(void) {
    int v0 = 44;
    int v1 = 14;
    int v2 = 85;
    int v3 = 69;
    int v4 = 76;
    int v5 = 57;
    int i;
    v3 = v3 - v5;
    v2 = v2 * 3;
    if (v3 > v2) { v3 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
