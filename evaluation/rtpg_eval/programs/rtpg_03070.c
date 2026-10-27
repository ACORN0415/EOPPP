int test_func(void) {
    int v0 = 39;
    int v1 = 11;
    int v2 = 80;
    int v3 = 71;
    int v4 = 61;
    int i;
    v4 = 62;
    if (v0 > v2) { v0 = v2; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
