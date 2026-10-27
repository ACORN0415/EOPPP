int __arr_8800[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 55;
    int v2 = 56;
    int v3 = 2;
    int v4 = 12;
    int v5 = 62;
    int i;
    for (i = 0; i < 10; i++) { __arr_8800[i] = v2 + i; }
    if (v2 > v3) { v2 = v3; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
