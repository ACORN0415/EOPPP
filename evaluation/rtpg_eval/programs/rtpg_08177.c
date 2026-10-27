int test_func(void) {
    int v0 = 26;
    int v1 = 75;
    int v2 = 67;
    int i;
    v1 = v1 - v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
