int test_func(void) {
    int v0 = 73;
    int v1 = 2;
    int v2 = 80;
    int v3 = 66;
    int i;
    v2 = 7;
    v3 = v3 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
