int test_func(void) {
    int v0 = 59;
    int v1 = 5;
    int v2 = 13;
    int v3 = 96;
    int v4 = 15;
    int v5 = 0;
    int v6 = 78;
    int i;
    v2 = v2 - v0;
    v4 = 12;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
