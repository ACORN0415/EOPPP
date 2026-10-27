int test_func(void) {
    int v0 = 68;
    int v1 = 42;
    int v2 = 36;
    int v3 = 9;
    int v4 = 2;
    int v5 = 53;
    int v6 = 22;
    int v7 = 80;
    int i;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
