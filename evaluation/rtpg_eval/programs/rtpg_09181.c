int test_func(void) {
    int v0 = 70;
    int v1 = 12;
    int v2 = 35;
    int v3 = 68;
    int v4 = 76;
    int v5 = 57;
    int v6 = 54;
    int v7 = 46;
    int i;
    if (v0 > v5) { v0 = v5; }
    v1 = v1 - v7;
    v7 = v7 * 2;
    switch (v7) {
        case 0: v7 = 1; break;
        case 1: v7 = 2; break;
        default: v7 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
