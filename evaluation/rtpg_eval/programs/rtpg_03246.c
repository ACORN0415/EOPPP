int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 99;
    int v2 = 44;
    int v3 = 49;
    int v4 = 85;
    int v5 = 58;
    int i;
    v4 = v4 + v4;
    int *__p = &v2;
    *__p = *__p + 1;
    v3 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
