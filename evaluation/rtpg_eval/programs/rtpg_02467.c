int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 28;
    int v1 = 68;
    int v2 = 52;
    int v3 = 82;
    int v4 = 74;
    int v5 = 38;
    int v6 = 7;
    int v7 = 13;
    int i;
    v7 = v7 + v3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
