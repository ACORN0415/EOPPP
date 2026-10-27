int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 14;
    int v1 = 32;
    int v2 = 32;
    int v3 = 80;
    int v4 = 74;
    int v5 = 40;
    int v6 = 91;
    int v7 = 41;
    int i;
    v3 = v3 * 8;
    v1 = __helper(v1);
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
