int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 15;
    int v1 = 94;
    int v2 = 54;
    int v3 = 72;
    int v4 = 37;
    int v5 = 12;
    int v6 = 85;
    int v7 = 64;
    int i;
    v7 = v7 + v6;
    v6 = v6 - v4;
    v7 = v7 * 8;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
