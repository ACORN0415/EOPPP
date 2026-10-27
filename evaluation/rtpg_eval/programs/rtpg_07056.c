int __arr_7056[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 92;
    int v2 = 36;
    int v3 = 39;
    int v4 = 10;
    int v5 = 24;
    int v6 = 26;
    int v7 = 20;
    int i;
    for (i = 0; i < 10; i++) { __arr_7056[i] = v5 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
