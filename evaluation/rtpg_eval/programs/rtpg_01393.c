int test_func(void) {
    int v0 = 70;
    int v1 = 38;
    int v2 = 86;
    int i;
    v0 = v0 * 3;
    v1 = v1 + v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
