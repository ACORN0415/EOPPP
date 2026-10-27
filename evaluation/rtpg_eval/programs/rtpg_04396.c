int __arr_4396[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 25;
    int v2 = 19;
    int v3 = 11;
    int v4 = 92;
    int i;
    if (v2 > v4) { v2 = v4; }
    v2 = v2 * 2;
    for (i = 0; i < 10; i++) { __arr_4396[i] = v0 + i; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
