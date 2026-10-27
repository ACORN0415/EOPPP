int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5043[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 86;
    int v2 = 98;
    int i;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_5043[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v0 = __helper(v0);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
