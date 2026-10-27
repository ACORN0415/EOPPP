int __arr_581[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 88;
    int v2 = 97;
    int v3 = 57;
    int v4 = 87;
    int v5 = 35;
    int v6 = 5;
    int v7 = 54;
    int i;
    v7 = v7 + v3;
    for (i = 0; i < 10; i++) { __arr_581[i] = v2 + i; }
    for (i = 0; i < 7; i++) {
        v2 = v2 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
