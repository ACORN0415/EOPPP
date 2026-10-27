int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 38;
    int v2 = 95;
    int v3 = 9;
    int i;
    v3 = v3 * 3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
