int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 25;
    int v2 = 88;
    int v3 = 66;
    int v4 = 35;
    int v5 = 68;
    int v6 = 41;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v6;
    }
    v2 = v2 - v1;
    v1 = 26;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
