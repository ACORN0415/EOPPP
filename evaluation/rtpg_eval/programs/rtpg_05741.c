int test_func(void) {
    int v0 = 31;
    int v1 = 63;
    int v2 = 69;
    int i;
    if (v2 > v2) { v2 = v2; }
    for (i = 0; i < 8; i++) {
        v0 = v0 + v0;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v0 = v0 / (v2 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
