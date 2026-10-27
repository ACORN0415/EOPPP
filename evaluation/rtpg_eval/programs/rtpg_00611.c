int test_func(void) {
    int v0 = 29;
    int v1 = 85;
    int v2 = 91;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 + v1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
