int test_func(void) {
    int v0 = 100;
    int v1 = 30;
    int v2 = 94;
    int v3 = 61;
    int v4 = 58;
    int v5 = 27;
    int v6 = 71;
    int i;
    v0 = v0 - v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
