int test_func(void) {
    int v0 = 51;
    int v1 = 18;
    int v2 = 70;
    int v3 = 89;
    int i;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v1;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
