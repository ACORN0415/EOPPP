int test_func(void) {
    int v0 = 85;
    int v1 = 65;
    int v2 = 84;
    int v3 = 21;
    int v4 = 62;
    int v5 = 23;
    int i;
    if (v2 > v4) { v2 = v4; }
    v3 = v3 * 10;
    for (i = 0; i < 6; i++) {
        v5 = v5 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    v1 = v1 % (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
