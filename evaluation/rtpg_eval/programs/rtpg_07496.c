int test_func(void) {
    int v0 = 84;
    int v1 = 69;
    int v2 = 79;
    int v3 = 20;
    int i;
    if (v2 > v1) { v2 = v1; }
    v1 = v1 - v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
