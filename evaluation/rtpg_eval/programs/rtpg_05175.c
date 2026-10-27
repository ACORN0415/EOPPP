int __arr_5175[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 23;
    int v2 = 33;
    int v3 = 23;
    int v4 = 5;
    int v5 = 91;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 10; i++) { __arr_5175[i] = v0 + i; }
    for (i = 0; i < 10; i++) {
        v0 = v0 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
