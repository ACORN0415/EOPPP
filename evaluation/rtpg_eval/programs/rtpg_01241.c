int test_func(void) {
    int v0 = 18;
    int v1 = 47;
    int v2 = 52;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = 41;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
