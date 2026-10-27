int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 37;
    int v1 = 73;
    int v2 = 68;
    int v3 = 58;
    int v4 = 34;
    int i;
    v2 = v2 + v4;
    v2 = __helper(v2);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
