int __arr_8142[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 67;
    int v2 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_8142[i] = v2 + i; }
    v2 = 15;
    v1 = v1 * 6;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
