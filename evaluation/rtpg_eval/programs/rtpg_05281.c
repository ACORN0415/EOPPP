int __arr_5281[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 97;
    int v2 = 35;
    int v3 = 58;
    int i;
    for (i = 0; i < 10; i++) { __arr_5281[i] = v0 + i; }
    v2 = v2 - v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
