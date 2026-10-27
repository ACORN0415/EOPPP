int __arr_8981[10];
int test_func(void) {
    int v0 = 4;
    int v1 = 15;
    int v2 = 7;
    int v3 = 80;
    int v4 = 28;
    int v5 = 35;
    int v6 = 51;
    int i;
    v2 = 81;
    for (i = 0; i < 10; i++) { __arr_8981[i] = v5 + i; }
    v5 = v5 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
