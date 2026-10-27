int test_func(void) {
    int v0 = 10;
    int v1 = 9;
    int v2 = 65;
    int v3 = 7;
    int i;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
