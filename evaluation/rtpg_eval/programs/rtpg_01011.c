int __arr_1011[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 13;
    int v2 = 13;
    int i;
    for (i = 0; i < 10; i++) { __arr_1011[i] = v2 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v2 = v2 % (v0 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
