int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 73;
    int v1 = 64;
    int v2 = 46;
    int v3 = 68;
    int v4 = 62;
    int v5 = 15;
    int v6 = 70;
    int v7 = 57;
    int i;
    v3 = v3 * 4;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
