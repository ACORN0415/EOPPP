int test_func(void) {
    int v0 = 2;
    int v1 = 85;
    int v2 = 34;
    int v3 = 89;
    int v4 = 56;
    int v5 = 98;
    int v6 = 47;
    int i;
    v4 = v4 + v3;
    for (i = 0; i < 19; i++) {
        v6 = v6 + v5;
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
