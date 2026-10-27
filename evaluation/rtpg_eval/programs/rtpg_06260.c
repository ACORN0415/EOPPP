int test_func(void) {
    int v0 = 21;
    int v1 = 28;
    int v2 = 69;
    int v3 = 96;
    int i;
    v2 = v2 + v1;
    if (v0 > v1) { v0 = v1; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
