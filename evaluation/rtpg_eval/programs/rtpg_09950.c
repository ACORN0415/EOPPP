int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 49;
    int v2 = 71;
    int v3 = 60;
    int v4 = 100;
    int v5 = 48;
    int v6 = 41;
    int i;
    v0 = v0 + v3;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
