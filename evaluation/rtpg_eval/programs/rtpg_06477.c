int test_func(void) {
    int v0 = 67;
    int v1 = 30;
    int v2 = 64;
    int i;
    v0 = 81;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v1 = v1 ^ v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
