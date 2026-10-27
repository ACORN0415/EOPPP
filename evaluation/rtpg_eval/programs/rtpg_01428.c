int test_func(void) {
    int v0 = 5;
    int v1 = 21;
    int v2 = 37;
    int v3 = 10;
    int i;
    v0 = v0 - v2;
    v3 = v3 & v0;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
