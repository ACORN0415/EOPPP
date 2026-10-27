int test_func(void) {
    int v0 = 72;
    int v1 = 6;
    int v2 = 79;
    int v3 = 57;
    int v4 = 100;
    int i;
    v4 = v4 + v0;
    int *__p = &v0;
    *__p = *__p + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
