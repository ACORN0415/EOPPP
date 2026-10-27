int test_func(void) {
    int v0 = 76;
    int v1 = 58;
    int v2 = 10;
    int v3 = 12;
    int v4 = 76;
    int v5 = 36;
    int v6 = 100;
    int i;
    v2 = 40;
    v0 = v0 - v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
