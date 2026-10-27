int __arr_9248[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 72;
    int v2 = 81;
    int v3 = 67;
    int v4 = 90;
    int v5 = 20;
    int v6 = 46;
    int v7 = 22;
    int i;
    for (i = 0; i < 10; i++) { __arr_9248[i] = v6 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
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
