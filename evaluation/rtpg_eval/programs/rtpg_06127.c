int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 13;
    int v2 = 0;
    int v3 = 25;
    int v4 = 78;
    int v5 = 35;
    int i;
    v0 = v0 * 4;
    v5 = 73;
    for (i = 0; i < 9; i++) {
        v5 = v5 + v4;
    }
    v2 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
