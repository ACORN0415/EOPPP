int __arr_4994[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 56;
    int v2 = 99;
    int v3 = 15;
    int v4 = 70;
    int v5 = 44;
    int i;
    for (i = 0; i < 10; i++) { __arr_4994[i] = v5 + i; }
    v5 = v5 * 7;
    v4 = v4 + v1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
