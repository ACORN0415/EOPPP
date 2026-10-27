int test_func(void) {
    int v0 = 25;
    int v1 = 86;
    int v2 = 93;
    int v3 = 25;
    int v4 = 33;
    int v5 = 73;
    int i;
    v4 = 62;
    for (i = 0; i < 10; i++) {
        v5 = v5 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
