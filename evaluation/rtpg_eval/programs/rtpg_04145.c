int __arr_4145[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 11;
    int v2 = 57;
    int v3 = 42;
    int i;
    for (i = 0; i < 10; i++) { __arr_4145[i] = v0 + i; }
    v0 = v0 - v2;
    if (v0 > v3) { v0 = v3; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
