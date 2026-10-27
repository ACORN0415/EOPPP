int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 69;
    int v1 = 44;
    int v2 = 18;
    int v3 = 37;
    int v4 = 45;
    int i;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v0;
    }
    v1 = __helper(v1);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
