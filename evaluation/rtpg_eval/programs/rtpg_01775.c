int test_func(void) {
    int v0 = 72;
    int v1 = 95;
    int v2 = 81;
    int v3 = 73;
    int i;
    v1 = v1 + v3;
    if (v2 > v3) { v2 = v3; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
