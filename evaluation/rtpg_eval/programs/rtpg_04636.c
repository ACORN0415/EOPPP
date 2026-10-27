int test_func(void) {
    int v0 = 91;
    int v1 = 54;
    int v2 = 17;
    int v3 = 85;
    int v4 = 75;
    int i;
    v4 = v4 - v1;
    if (v3 > v4) { v3 = v4; }
    v1 = v1 + v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
