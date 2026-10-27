int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 57;
    int v2 = 13;
    int v3 = 70;
    int v4 = 70;
    int i;
    if (v1 > v2) { v1 = v2; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
