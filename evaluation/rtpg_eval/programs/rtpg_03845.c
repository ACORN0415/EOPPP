int __arr_3845[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 78;
    int v2 = 20;
    int v3 = 53;
    int v4 = 20;
    int v5 = 30;
    int v6 = 65;
    int v7 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_3845[i] = v5 + i; }
    v4 = v4 + v0;
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
