int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 38;
    int v1 = 12;
    int v2 = 72;
    int v3 = 95;
    int i;
    v2 = v2 + v3;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v0;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
