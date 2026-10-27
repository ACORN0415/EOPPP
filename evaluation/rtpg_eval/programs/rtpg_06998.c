int test_func(void) {
    int v0 = 93;
    int v1 = 37;
    int v2 = 60;
    int v3 = 79;
    int v4 = 56;
    int v5 = 83;
    int i;
    if (v0 > v4) { v0 = v4; }
    for (i = 0; i < 14; i++) {
        v0 = v0 + v1;
    }
    v4 = v4 & v5;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
