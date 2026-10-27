int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 78;
    int v1 = 62;
    int v2 = 51;
    int v3 = 5;
    int v4 = 14;
    int v5 = 79;
    int i;
    if (v2 > v3) { v2 = v3; }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
