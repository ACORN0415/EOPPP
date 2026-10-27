int __arr_3906[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 44;
    int v2 = 98;
    int v3 = 85;
    int v4 = 70;
    int v5 = 10;
    int i;
    v0 = 31;
    v3 = v3 * 2;
    for (i = 0; i < 10; i++) { __arr_3906[i] = v3 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v3 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
