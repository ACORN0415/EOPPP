int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 24;
    int v2 = 67;
    int i;
    v2 = v2 + v2;
    v2 = 18;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
