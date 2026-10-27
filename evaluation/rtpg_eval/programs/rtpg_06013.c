int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 90;
    int v2 = 20;
    int v3 = 5;
    int v4 = 46;
    int v5 = 75;
    int v6 = 24;
    int v7 = 29;
    int i;
    if (v3 > v1) { v3 = v1; }
    v6 = v6 - v0;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v0 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
