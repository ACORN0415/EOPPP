int test_func(void) {
    int v0 = 100;
    int v1 = 67;
    int v2 = 59;
    int v3 = 52;
    int v4 = 52;
    int v5 = 94;
    int v6 = 73;
    int v7 = 98;
    int i;
    v0 = 45;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
