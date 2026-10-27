int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 68;
    int v1 = 58;
    int v2 = 82;
    int v3 = 69;
    int v4 = 31;
    int v5 = 75;
    int v6 = 90;
    int i;
    v6 = v6 + v0;
    v5 = v5 - v4;
    if (v0 > v2) { v0 = v2; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
