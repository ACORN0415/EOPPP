int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 50;
    int v2 = 91;
    int v3 = 21;
    int v4 = 75;
    int v5 = 32;
    int i;
    if (v2 > v0) { v2 = v0; }
    v1 = v1 * 4;
    v3 = v3 + v1;
    v2 = __helper(v2);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
