int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7744[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 86;
    int v2 = 26;
    int v3 = 17;
    int v4 = 93;
    int v5 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_7744[i] = v3 + i; }
    for (i = 0; i < 19; i++) {
        v5 = v5 + v1;
    }
    v4 = v4 + v4;
    v5 = __helper(v5);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
