int test_func(void) {
    int v0 = 62;
    int v1 = 28;
    int v2 = 31;
    int i;
    v2 = v2 * 4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
