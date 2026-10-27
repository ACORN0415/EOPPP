int __arr_8023[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 6;
    int v2 = 58;
    int v3 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_8023[i] = v1 + i; }
    v0 = v0 + v3;
    v1 = 15;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
