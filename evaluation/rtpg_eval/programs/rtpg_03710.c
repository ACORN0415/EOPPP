int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 54;
    int v2 = 76;
    int v3 = 57;
    int v4 = 97;
    int v5 = 92;
    int v6 = 11;
    int v7 = 0;
    int i;
    v7 = v7 + v1;
    v4 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
