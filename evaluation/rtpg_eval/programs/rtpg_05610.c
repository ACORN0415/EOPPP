int test_func(void) {
    int v0 = 76;
    int v1 = 8;
    int v2 = 16;
    int v3 = 54;
    int v4 = 62;
    int v5 = 10;
    int i;
    if (v0 > v0) { v0 = v0; }
    for (i = 0; i < 5; i++) {
        v4 = v4 + v2;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
