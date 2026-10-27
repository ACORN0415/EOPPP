int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_175[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 72;
    int v2 = 9;
    int v3 = 80;
    int v4 = 56;
    int i;
    for (i = 0; i < 10; i++) { __arr_175[i] = v3 + i; }
    v2 = v2 - v1;
    v2 = __helper(v2);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
