int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3525[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 82;
    int v2 = 50;
    int v3 = 43;
    int v4 = 40;
    int v5 = 83;
    int i;
    for (i = 0; i < 10; i++) { __arr_3525[i] = v2 + i; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
