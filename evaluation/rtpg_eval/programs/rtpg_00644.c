int __arr_644[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 46;
    int v2 = 44;
    int v3 = 40;
    int v4 = 40;
    int v5 = 19;
    int v6 = 67;
    int i;
    for (i = 0; i < 10; i++) { __arr_644[i] = v5 + i; }
    v1 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
