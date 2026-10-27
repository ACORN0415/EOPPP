int test_func(void) {
    int v0 = 7;
    int v1 = 48;
    int v2 = 7;
    int v3 = 67;
    int v4 = 14;
    int v5 = 11;
    int v6 = 49;
    int v7 = 26;
    int i;
    if (v7 > v1) { v7 = v1; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
