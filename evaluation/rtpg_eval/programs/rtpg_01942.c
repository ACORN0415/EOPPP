int test_func(void) {
    int v0 = 23;
    int v1 = 27;
    int v2 = 58;
    int v3 = 9;
    int v4 = 0;
    int i;
    int *__p = &v3;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
