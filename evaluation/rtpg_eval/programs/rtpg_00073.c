int __arr_73[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 92;
    int v2 = 88;
    int v3 = 80;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_73[i] = v0 + i; }
    v2 = 6;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
