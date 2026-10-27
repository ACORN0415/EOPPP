int test_func(void) {
    int v0 = 17;
    int v1 = 76;
    int v2 = 61;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v1;
    }
    if (v1 > v2) { v1 = v2; }
    v1 = v1 - v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
