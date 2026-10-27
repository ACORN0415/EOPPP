int test_func(void) {
    int v0 = 34;
    int v1 = 81;
    int v2 = 41;
    int v3 = 19;
    int v4 = 6;
    int i;
    v2 = 81;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v3;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
