int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 70;
    int v2 = 51;
    int v3 = 63;
    int v4 = 33;
    int v5 = 29;
    int v6 = 63;
    int i;
    v3 = v3 + v4;
    v6 = 35;
    v1 = v1 - v0;
    v3 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
