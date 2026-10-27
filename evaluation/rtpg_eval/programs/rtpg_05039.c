int test_func(void) {
    int v0 = 79;
    int v1 = 92;
    int v2 = 29;
    int v3 = 78;
    int v4 = 84;
    int v5 = 87;
    int v6 = 65;
    int v7 = 37;
    int i;
    v2 = 76;
    v1 = v1 - v6;
    v2 = v2 % (v5 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
