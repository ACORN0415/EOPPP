int test_func(void) {
    int v0 = 3;
    int v1 = 23;
    int v2 = 10;
    int v3 = 38;
    int v4 = 27;
    int v5 = 86;
    int i;
    v4 = 82;
    v5 = v5 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
