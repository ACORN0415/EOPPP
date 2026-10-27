int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 23;
    int v1 = 30;
    int v2 = 11;
    int v3 = 99;
    int v4 = 58;
    int v5 = 21;
    int i;
    v3 = v3 - v2;
    v3 = __helper(v3);
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
