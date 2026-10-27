int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9300[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 85;
    int v2 = 96;
    int v3 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_9300[i] = v2 + i; }
    if (v0 > v1) { v0 = v1; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v2 = __helper(v2);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
