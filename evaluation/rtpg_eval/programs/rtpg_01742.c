int __arr_1742[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 25;
    int v2 = 74;
    int i;
    for (i = 0; i < 10; i++) { __arr_1742[i] = v2 + i; }
    for (i = 0; i < 10; i++) {
        v0 = v0 + v2;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
