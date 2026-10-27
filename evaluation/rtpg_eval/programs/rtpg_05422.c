int __arr_5422[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 22;
    int v2 = 52;
    int i;
    for (i = 0; i < 10; i++) { __arr_5422[i] = v0 + i; }
    v0 = v0 - v2;
    v1 = 0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
