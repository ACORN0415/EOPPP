int __arr_1707[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 14;
    int v2 = 65;
    int v3 = 97;
    int v4 = 79;
    int i;
    for (i = 0; i < 10; i++) { __arr_1707[i] = v0 + i; }
    if (v2 > v1) { v2 = v1; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v4 = __arr_didx[__idx_didx[0]];
    v2 = v2 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
