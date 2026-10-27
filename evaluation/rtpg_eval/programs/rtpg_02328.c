int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 100;
    int v2 = 20;
    int v3 = 57;
    int v4 = 46;
    int v5 = 2;
    int i;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v5;
    }
    v4 = __arr_didx[__idx_didx[0]];
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
