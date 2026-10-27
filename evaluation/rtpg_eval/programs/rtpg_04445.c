int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 41;
    int v2 = 55;
    int v3 = 40;
    int v4 = 66;
    int v5 = 78;
    int v6 = 50;
    int v7 = 35;
    int i;
    if (v1 > v1) { v1 = v1; }
    v4 = v4 + v7;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    int *__p = &v6;
    *__p = *__p + 1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
