int test_func(void) {
    int v0 = 78;
    int v1 = 85;
    int v2 = 46;
    int v3 = 45;
    int v4 = 42;
    int v5 = 43;
    int v6 = 22;
    int i;
    v2 = v2 - v5;
    if (v4 > v0) { v4 = v0; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
