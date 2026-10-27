int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 43;
    int v1 = 9;
    int v2 = 60;
    int v3 = 69;
    int v4 = 75;
    int i;
    v4 = v4 * 5;
    v4 = __helper(v4);
    v0 = v0 / (v1 + 1);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
