int __arr_7968[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 18;
    int v2 = 71;
    int v3 = 75;
    int v4 = 83;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v4;
    }
    v2 = v2 * 6;
    for (i = 0; i < 10; i++) { __arr_7968[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
