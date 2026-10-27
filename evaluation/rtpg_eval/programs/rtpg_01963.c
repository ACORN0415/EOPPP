int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 34;
    int v2 = 67;
    int v3 = 89;
    int i;
    v3 = v3 + v3;
    v3 = v3 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v0 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
