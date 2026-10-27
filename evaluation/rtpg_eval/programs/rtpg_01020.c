int test_func(void) {
    int v0 = 51;
    int v1 = 3;
    int v2 = 55;
    int v3 = 83;
    int i;
    v2 = 11;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
