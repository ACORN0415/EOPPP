int test_func(void) {
    int v0 = 25;
    int v1 = 7;
    int v2 = 94;
    int v3 = 68;
    int v4 = 48;
    int v5 = 31;
    int v6 = 98;
    int i;
    v2 = 93;
    v6 = v6 + v6;
    v6 = v6 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
