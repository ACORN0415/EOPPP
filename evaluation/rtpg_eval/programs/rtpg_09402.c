int __arr_9402[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 83;
    int v2 = 94;
    int v3 = 84;
    int v4 = 71;
    int v5 = 94;
    int v6 = 46;
    int i;
    v3 = 91;
    for (i = 0; i < 10; i++) { __arr_9402[i] = v6 + i; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
