int test_func(void) {
    int v0 = 53;
    int v1 = 75;
    int v2 = 3;
    int v3 = 9;
    int v4 = 93;
    int i;
    v0 = 75;
    v2 = v2 + v4;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
