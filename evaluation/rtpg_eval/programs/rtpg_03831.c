int test_func(void) {
    int v0 = 47;
    int v1 = 14;
    int v2 = 48;
    int v3 = 85;
    int v4 = 49;
    int v5 = 26;
    int i;
    v2 = v2 + v2;
    v5 = 11;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
