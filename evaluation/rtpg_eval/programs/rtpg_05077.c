int __arr_5077[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 31;
    int v2 = 83;
    int i;
    for (i = 0; i < 10; i++) { __arr_5077[i] = v2 + i; }
    if (v0 > v0) { v0 = v0; }
    v1 = v1 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
