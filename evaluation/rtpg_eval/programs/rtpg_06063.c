int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 60;
    int v2 = 71;
    int v3 = 41;
    int v4 = 94;
    int v5 = 19;
    int v6 = 28;
    int i;
    for (i = 0; i < 16; i++) {
        v4 = v4 + v6;
    }
    if (v2 > v5) { v2 = v5; }
    v4 = __arr_didx[__idx_didx[0]];
    int *__p = &v6;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
