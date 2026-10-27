int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 83;
    int v2 = 73;
    int i;
    v1 = v1 + v0;
    v2 = v2 - v1;
    v2 = v2 * 10;
    v2 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
