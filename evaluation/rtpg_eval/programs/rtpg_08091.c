int __arr_8091[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 85;
    int v2 = 95;
    int v3 = 33;
    int v4 = 89;
    int v5 = 37;
    int v6 = 70;
    int i;
    v1 = v1 * 6;
    for (i = 0; i < 10; i++) { __arr_8091[i] = v2 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
