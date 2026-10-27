int __arr_8444[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 15;
    int v2 = 73;
    int v3 = 40;
    int v4 = 63;
    int v5 = 89;
    int i;
    for (i = 0; i < 10; i++) { __arr_8444[i] = v3 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v3 = __arr_didx[__idx_didx[0]];
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
