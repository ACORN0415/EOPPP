int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 47;
    int v1 = 100;
    int v2 = 14;
    int v3 = 1;
    int v4 = 21;
    int v5 = 16;
    int v6 = 36;
    int i;
    v6 = 16;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
