int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 25;
    int v2 = 50;
    int v3 = 63;
    int i;
    v2 = 10;
    v3 = __arr_didx[__idx_didx[0]];
    float __f = 1.5f;
    __f = __f + 1.0f;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
