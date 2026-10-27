int test_func(void) {
    int v0 = 62;
    int v1 = 5;
    int v2 = 32;
    int i;
    v0 = v0 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
