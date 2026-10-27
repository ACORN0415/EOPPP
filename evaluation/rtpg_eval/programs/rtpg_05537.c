int __arr_5537[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 20;
    int v2 = 80;
    int i;
    for (i = 0; i < 10; i++) { __arr_5537[i] = v0 + i; }
    v1 = v1 | v2;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
