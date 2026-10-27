int test_func(void) {
    int v0 = 33;
    int v1 = 82;
    int v2 = 63;
    int v3 = 77;
    int v4 = 32;
    int v5 = 17;
    int i;
    if (v5 > v1) { v5 = v1; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v4 = v4 & v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
