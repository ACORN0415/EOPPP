int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 41;
    int v1 = 89;
    int v2 = 89;
    int v3 = 13;
    int v4 = 28;
    int v5 = 40;
    int v6 = 95;
    int v7 = 44;
    int i;
    if (v3 > v4) { v3 = v4; }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
