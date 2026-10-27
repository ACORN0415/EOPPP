int __arr_391[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 0;
    int v2 = 42;
    int v3 = 71;
    int i;
    v0 = v0 + v2;
    v1 = 31;
    for (i = 0; i < 10; i++) { __arr_391[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
