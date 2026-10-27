int test_func(void) {
    int v0 = 73;
    int v1 = 63;
    int v2 = 81;
    int v3 = 31;
    int v4 = 68;
    int v5 = 18;
    int v6 = 28;
    int i;
    for (i = 0; i < 19; i++) {
        v5 = v5 + v1;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
