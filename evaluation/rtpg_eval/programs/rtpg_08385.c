int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8385[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 7;
    int v2 = 5;
    int v3 = 3;
    int v4 = 7;
    int i;
    for (i = 0; i < 10; i++) { __arr_8385[i] = v3 + i; }
    v2 = __helper(v2);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
