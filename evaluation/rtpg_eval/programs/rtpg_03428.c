int __arr_3428[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 11;
    int v2 = 7;
    int v3 = 15;
    int i;
    if (v3 > v2) { v3 = v2; }
    v3 = v3 * 4;
    for (i = 0; i < 10; i++) { __arr_3428[i] = v1 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
