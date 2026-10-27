int __arr_254[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 8;
    int v2 = 14;
    int v3 = 93;
    int v4 = 32;
    int v5 = 86;
    int i;
    for (i = 0; i < 10; i++) { __arr_254[i] = v4 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
