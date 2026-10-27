int test_func(void) {
    int v0 = 35;
    int v1 = 42;
    int v2 = 83;
    int v3 = 59;
    int v4 = 30;
    int v5 = 16;
    int v6 = 98;
    int i;
    if (v1 > v6) { v1 = v6; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
