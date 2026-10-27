int test_func(void) {
    int v0 = 91;
    int v1 = 80;
    int v2 = 20;
    int i;
    if (v0 > v1) { v0 = v1; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v0 = v0 & v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
