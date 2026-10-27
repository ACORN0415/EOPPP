int test_func(void) {
    int v0 = 40;
    int v1 = 32;
    int v2 = 72;
    int v3 = 2;
    int v4 = 57;
    int v5 = 55;
    int i;
    if (v4 > v3) { v4 = v3; }
    for (i = 0; i < 7; i++) {
        v1 = v1 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
