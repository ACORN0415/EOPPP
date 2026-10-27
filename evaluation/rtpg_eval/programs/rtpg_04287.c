int __arr_4287[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 74;
    int v2 = 72;
    int v3 = 4;
    int v4 = 8;
    int v5 = 74;
    int v6 = 76;
    int i;
    v1 = v1 + v0;
    v5 = 63;
    for (i = 0; i < 10; i++) { __arr_4287[i] = v4 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
