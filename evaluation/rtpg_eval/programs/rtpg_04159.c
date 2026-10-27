int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 3;
    int v1 = 84;
    int v2 = 76;
    int v3 = 94;
    int v4 = 91;
    int v5 = 36;
    int v6 = 38;
    int v7 = 65;
    int i;
    v5 = v5 + v1;
    v2 = v2 * 3;
    v3 = __helper(v3);
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
