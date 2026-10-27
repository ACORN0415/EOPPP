int test_func(void) {
    int v0 = 39;
    int v1 = 80;
    int v2 = 9;
    int v3 = 81;
    int v4 = 83;
    int v5 = 73;
    int v6 = 65;
    int v7 = 50;
    int i;
    if (v7 > v2) { v7 = v2; }
    v5 = v5 + v6;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
