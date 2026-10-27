int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 44;
    int v2 = 65;
    int v3 = 67;
    int v4 = 5;
    int v5 = 66;
    int v6 = 1;
    int v7 = 47;
    int i;
    v7 = v7 + v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
