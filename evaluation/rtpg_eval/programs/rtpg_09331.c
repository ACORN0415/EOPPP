int test_func(void) {
    int v0 = 57;
    int v1 = 95;
    int v2 = 62;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
