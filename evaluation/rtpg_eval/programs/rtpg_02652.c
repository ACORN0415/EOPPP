int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 60;
    int v2 = 29;
    int v3 = 16;
    int v4 = 88;
    int v5 = 100;
    int v6 = 44;
    int v7 = 75;
    int i;
    if (v5 > v0) { v5 = v0; }
    v4 = 12;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v3;
    }
    v3 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
