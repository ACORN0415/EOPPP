int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 57;
    int v1 = 99;
    int v2 = 25;
    int v3 = 59;
    int v4 = 71;
    int v5 = 13;
    int v6 = 86;
    int v7 = 32;
    int i;
    v1 = __helper(v1);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
