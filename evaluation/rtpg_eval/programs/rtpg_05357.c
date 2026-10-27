int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 0;
    int v1 = 41;
    int v2 = 76;
    int i;
    v2 = v2 + v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
