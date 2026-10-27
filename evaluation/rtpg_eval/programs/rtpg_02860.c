int __arr_2860[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 51;
    int v2 = 96;
    int v3 = 67;
    int v4 = 0;
    int v5 = 7;
    int v6 = 46;
    int i;
    for (i = 0; i < 10; i++) { __arr_2860[i] = v4 + i; }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
