int __arr_6878[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 1;
    int v2 = 82;
    int v3 = 20;
    int i;
    v3 = v3 * 9;
    for (i = 0; i < 10; i++) { __arr_6878[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
