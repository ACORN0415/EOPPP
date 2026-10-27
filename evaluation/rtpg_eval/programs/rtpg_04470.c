int test_func(void) {
    int v0 = 23;
    int v1 = 85;
    int v2 = 80;
    int v3 = 76;
    int v4 = 45;
    int i;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v0;
    }
    v4 = v4 * 9;
    v2 = v2 - v0;
    int *__p = &v2;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
