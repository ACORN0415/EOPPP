int test_func(void) {
    int v0 = 90;
    int v1 = 46;
    int v2 = 19;
    int v3 = 72;
    int i;
    v3 = v3 * 4;
    v3 = v3 - v2;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
