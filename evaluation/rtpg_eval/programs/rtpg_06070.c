int test_func(void) {
    int v0 = 12;
    int v1 = 86;
    int v2 = 41;
    int v3 = 32;
    int v4 = 29;
    int v5 = 46;
    int v6 = 55;
    int v7 = 2;
    int i;
    v2 = v2 + v3;
    v3 = v3 & v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
