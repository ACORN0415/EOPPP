int test_func(void) {
    int v0 = 83;
    int v1 = 42;
    int v2 = 80;
    int v3 = 79;
    int i;
    v0 = v0 + v2;
    if (v3 > v3) { v3 = v3; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
