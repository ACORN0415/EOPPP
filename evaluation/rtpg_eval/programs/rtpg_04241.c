int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 86;
    int v2 = 73;
    int v3 = 63;
    int v4 = 95;
    int v5 = 51;
    int i;
    if (v1 > v2) { v1 = v2; }
    v3 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
