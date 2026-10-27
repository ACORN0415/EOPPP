int __arr_4980[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 12;
    int v2 = 21;
    int i;
    for (i = 0; i < 10; i++) { __arr_4980[i] = v0 + i; }
    v1 = v1 * 10;
    v2 = v2 - v0;
    v2 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
