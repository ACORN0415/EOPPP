int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 2;
    int v1 = 71;
    int v2 = 82;
    int v3 = 9;
    int v4 = 73;
    int v5 = 22;
    int v6 = 18;
    int i;
    v6 = v6 * 4;
    v4 = v4 - v3;
    v0 = __helper(v0);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
