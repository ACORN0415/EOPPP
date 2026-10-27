int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 16;
    int v2 = 47;
    int v3 = 14;
    int v4 = 21;
    int v5 = 30;
    int v6 = 11;
    int v7 = 87;
    int i;
    v7 = v7 + v5;
    if (v7 > v5) { v7 = v5; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
