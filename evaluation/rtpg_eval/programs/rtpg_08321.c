int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 1;
    int v2 = 50;
    int v3 = 93;
    int v4 = 39;
    int v5 = 7;
    int i;
    v2 = v2 * 8;
    v5 = v5 | v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
