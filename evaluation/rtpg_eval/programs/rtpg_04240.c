int __arr_4240[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 58;
    int v2 = 89;
    int v3 = 13;
    int v4 = 93;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 10; i++) { __arr_4240[i] = v3 + i; }
    v2 = v2 & v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
