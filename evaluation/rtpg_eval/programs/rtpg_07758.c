int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 79;
    int v1 = 70;
    int v2 = 86;
    int v3 = 58;
    int v4 = 50;
    int v5 = 4;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v0;
    }
    v0 = 26;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
