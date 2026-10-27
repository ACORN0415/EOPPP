int test_func(void) {
    int v0 = 21;
    int v1 = 27;
    int v2 = 49;
    int v3 = 33;
    int v4 = 7;
    int v5 = 57;
    int i;
    if (v1 > v1) { v1 = v1; }
    v0 = 36;
    v0 = v0 + v2;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
