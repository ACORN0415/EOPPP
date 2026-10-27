int test_func(void) {
    int v0 = 34;
    int v1 = 82;
    int v2 = 30;
    int v3 = 86;
    int v4 = 20;
    int i;
    v2 = 47;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
