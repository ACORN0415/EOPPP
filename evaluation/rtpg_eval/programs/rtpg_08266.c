int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 14;
    int v2 = 80;
    int v3 = 97;
    int i;
    v3 = v3 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v3 = __arr_didx[__idx_didx[0]];
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
