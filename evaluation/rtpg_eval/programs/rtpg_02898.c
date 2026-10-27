int test_func(void) {
    int v0 = 83;
    int v1 = 98;
    int v2 = 37;
    int v3 = 23;
    int v4 = 26;
    int v5 = 26;
    int v6 = 5;
    int i;
    if (v0 > v3) { v0 = v3; }
    v1 = v1 * 9;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v6; __s.b = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
