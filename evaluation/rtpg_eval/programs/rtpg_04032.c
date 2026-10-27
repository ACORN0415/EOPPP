int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 20;
    int v1 = 38;
    int v2 = 66;
    int v3 = 36;
    int v4 = 82;
    int i;
    v3 = 42;
    v2 = __helper(v2);
    v0 = v0 / (v4 + 1);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
