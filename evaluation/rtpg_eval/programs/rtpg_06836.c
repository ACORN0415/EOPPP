int __arr_6836[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 60;
    int v2 = 30;
    int v3 = 34;
    int v4 = 74;
    int v5 = 24;
    int v6 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_6836[i] = v6 + i; }
    v1 = v1 - v0;
    v5 = v5 * 2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
