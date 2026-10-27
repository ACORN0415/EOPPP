int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 66;
    int v1 = 64;
    int v2 = 55;
    int v3 = 19;
    int v4 = 91;
    int v5 = 99;
    int v6 = 86;
    int v7 = 46;
    int i;
    v0 = v0 - v7;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v7;
    }
    v1 = __helper(v1);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
