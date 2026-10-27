int __arr_2002[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 87;
    int v2 = 19;
    int v3 = 67;
    int v4 = 41;
    int i;
    for (i = 0; i < 10; i++) { __arr_2002[i] = v2 + i; }
    for (i = 0; i < 19; i++) {
        v1 = v1 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
