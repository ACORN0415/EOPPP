int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 62;
    int v2 = 91;
    int i;
    v2 = v2 * 7;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v2 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
