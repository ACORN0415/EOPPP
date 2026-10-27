int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 67;
    int v1 = 85;
    int v2 = 52;
    int v3 = 81;
    int v4 = 20;
    int v5 = 7;
    int i;
    v0 = v0 + v5;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
