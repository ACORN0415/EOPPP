int __arr_3548[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 10;
    int v2 = 97;
    int i;
    v2 = v2 + v1;
    for (i = 0; i < 10; i++) { __arr_3548[i] = v2 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v2 = v2 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
