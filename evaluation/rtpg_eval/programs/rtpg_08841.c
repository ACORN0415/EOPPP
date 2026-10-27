int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 54;
    int v2 = 96;
    int v3 = 77;
    int v4 = 3;
    int v5 = 85;
    int i;
    v0 = v0 * 9;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
