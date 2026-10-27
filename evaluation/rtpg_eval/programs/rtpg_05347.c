int test_func(void) {
    int v0 = 92;
    int v1 = 27;
    int v2 = 94;
    int v3 = 62;
    int v4 = 23;
    int v5 = 78;
    int i;
    v5 = v5 * 7;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
