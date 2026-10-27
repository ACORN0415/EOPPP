int test_func(void) {
    int v0 = 55;
    int v1 = 59;
    int v2 = 62;
    int v3 = 47;
    int v4 = 5;
    int v5 = 88;
    int v6 = 53;
    int v7 = 76;
    int i;
    if (v2 > v5) { v2 = v5; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
