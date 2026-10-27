int __arr_6226[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 53;
    int v2 = 21;
    int v3 = 91;
    int i;
    for (i = 0; i < 10; i++) { __arr_6226[i] = v0 + i; }
    v2 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
