int test_func(void) {
    int v0 = 10;
    int v1 = 97;
    int v2 = 22;
    int v3 = 84;
    int v4 = 24;
    int v5 = 62;
    int v6 = 17;
    int i;
    v4 = v4 + v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
