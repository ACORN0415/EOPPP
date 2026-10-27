int test_func(void) {
    int v0 = 78;
    int v1 = 39;
    int v2 = 40;
    int v3 = 53;
    int v4 = 4;
    int i;
    if (v3 > v3) { v3 = v3; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
