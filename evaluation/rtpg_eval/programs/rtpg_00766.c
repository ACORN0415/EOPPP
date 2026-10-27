int __arr_766[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 3;
    int v2 = 73;
    int v3 = 95;
    int v4 = 61;
    int v5 = 8;
    int i;
    v5 = v5 + v0;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_766[i] = v5 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
