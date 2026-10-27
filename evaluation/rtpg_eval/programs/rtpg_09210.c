int test_func(void) {
    int v0 = 30;
    int v1 = 39;
    int v2 = 94;
    int i;
    v1 = v1 - v2;
    v1 = v1 + v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
