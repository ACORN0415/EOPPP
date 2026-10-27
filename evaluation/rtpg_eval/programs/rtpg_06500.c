int __arr_6500[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 48;
    int v2 = 60;
    int v3 = 64;
    int v4 = 50;
    int v5 = 66;
    int v6 = 86;
    int v7 = 77;
    int i;
    v6 = v6 + v7;
    for (i = 0; i < 10; i++) { __arr_6500[i] = v3 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
